# This is an example resource file for rTorrent. Copy to
# ~/.rtorrent.rc and enable/modify the options as needed. Remember to
# uncomment the options you wish to enable.

# Maximum and minimum number of peers to connect to per torrent.
#
throttle.min_peers.normal.set = 40
throttle.max_peers.normal.set = 100

# Same as above but for seeding completed torrents (-1 = same as downloading)
#
throttle.min_peers.seed.set = 10
throttle.max_peers.seed.set = 50

# Maximum number of simultanious uploads per torrent.
#
throttle.max_uploads.set = 15

# Global upload and download rate in KiB. "0" for unlimited.
#
throttle.global_down.max_rate.set_kb = 0
throttle.global_up.max_rate.set_kb = 0

# Default directory to save the downloaded torrents.
#
directory.default.set =~/Downloads/rTorrent

# Default session directory. Make sure you dont run multiple instance
# of rtorrent using the same session directory. Perhaps using a
# relative path?
#
#session.path.set = ~/session

# Watch a directory for new torrents, and stop those that have been
# deleted.
#
schedule2 = watch_directory,5,5,load.start=~/Downloads/rTorrent/watch/*.torrent
#schedule2 = untied_directory,5,5,stop_untied=

# Close torrents when diskspace is low.
#
#schedule2 = low_diskspace,5,60,close_low_diskspace=100M

# The ip address reported to the tracker.
#
#network.local_address.set = 127.0.0.1

# The ip address the listening socket and outgoing connections is
# bound to.
#
#network.bind_address.set = 127.0.0.1

# Port range to use for listening.
#
#network.port_range.set = 6890-6999

# Start opening ports at a random position within the port range.
#
network.port_random.set = no

# Check hash for finished torrents. Might be usefull until the bug is
# fixed that causes lack of diskspace not to be properly reported.
#
#pieces.hash.on_completion.set = no

# Set whether the client should try to connect to UDP trackers.
#
#trackers.use_udp.set = yes

# Alternative calls to bind and ip that should handle dynamic ip's.
#
#schedule2 = ip_tick,0,1800,ip=rakshasa
#schedule2 = bind_tick,0,1800,bind=rakshasa

# Encryption options, set to none (default) or any combination of the following:
# allow_incoming, try_outgoing, require, require_RC4, enable_retry, prefer_plaintext
#
# The example value allows incoming encrypted connections, starts unencrypted
# outgoing connections but retries with encryption if they fail, preferring
# plaintext to RC4 encryption after the encrypted handshake
#
# protocol.encryption.set = allow_incoming,enable_retry,prefer_plaintext

# Enable DHT support for trackerless torrents or when all trackers are down.
# May be set to "disable" (completely disable DHT), "off" (do not start DHT),
# "auto" (start and stop DHT as needed), or "on" (start DHT immediately).
# The default is "off". For DHT to work, a session directory must be defined.
# 
# dht.mode.set = auto

# UDP port to use for DHT. 
#
#dht.port.set = 6881

# Enable peer exchange (for torrents not marked private)
#
#protocol.pex.set = yes

# Set downlad list layout style. ("full", "compact")
#
#ui.torrent_list.layout.set = "full"