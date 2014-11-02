
log "creating config directory"

sudo -u znc mkdir -p ~znc/.znc/configs
sudo -u znc touch ~znc/.znc/configs/znc.conf

log "creating configuration file"

ZNC_LISTEN_PORT=${ZNC_LISTEN_PORT:-$(mdata-get znc_listen_port 2>/dev/null)} || \
ZNC_LISTEN_PORT="7777";

cat > ~znc/.znc/configs/znc.conf << EOF
Version = 1.4
<Listener l>
  Port = ${ZNC_LISTEN_PORT}
  IPv4 = true
  IPv6 = true
  SSL = false
</Listener>

LoadModule = partyline
LoadModule = webadmin

<User admin>
  Pass       = sha256#a05f72e2e32d0f8c98959cd80ffd0124e72f2eb1a8ae1bc23982b0c984239983#!Gw1_NaZ_Ta)t.hK(TnB#
  Admin      = true
  Nick       = admin
  AltNick    = admin_
  Ident      = admin
  RealName   = Got ZNC?
  Buffer     = 50
  AutoClearChanBuffer = true
  ChanModes  = +stn
</User>
EOF

log "creating ZNC PEM"

sudo -u znc /opt/znc/bin/znc -p

log "starting znc"

/usr/sbin/svcadm enable znc
