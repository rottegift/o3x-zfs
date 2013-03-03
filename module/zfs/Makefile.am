
INFO_PLIST = Info.plist
PLIST_STRING = InfoPlist.strings

ZFS_META_VERSION = @ZFS_META_VERSION@
ZFS_DEBUG_STR = @ZFS_DEBUG_STR@

CFLAGS_KMOD = \
	-Wall \
	-nostdinc \
	-mkernel \
	-D_KERNEL \
	-DKERNEL \
	-DKERNEL_PRIVATE \
	-DDRIVER_PRIVATE \
	-DAPPLE \
	-DNeXT \
		-DNAMEDSTREAMS=1 \
		-DHAVE_SPL=1 \
	-DZFS_META_VERSION=\"@ZFS_META_VERSION@\" \
	-DZFS_META_RELEASE=\"@ZFS_META_RELEASE@\" \
	-I$(top_srcdir)/include \
		-I@SPL@/include \
		-I/System/Library/Frameworks/Kernel.framework/PrivateHeaders \
		-I/System/Library/Frameworks/Kernel.framework/Headers

LINKFLAGS_KMOD = \
	-Xlinker \
	-kext \
	-nostdlib \
	-lkmodc++ \
	-lkmod \
	-lcc_kext

bin_PROGRAMS = zfs.kext
noinst_PROGRAMS = zfs

zfs_kext_SOURCE =

zfs_SOURCES = \
	arc.c \
	bplist.c \
	bpobj.c \
	bptree.c \
	dbuf.c \
	ddt.c \
	ddt_zap.c \
	dmu.c \
	dmu_diff.c \
	dmu_object.c \
	dmu_objset.c \
	dmu_send.c \
	dmu_traverse.c \
	dmu_tx.c \
	dmu_zfetch.c \
	dnode.c \
	dnode_sync.c \
	dsl_dataset.c \
	dsl_deadlist.c \
	dsl_deleg.c \
	dsl_dir.c \
	dsl_pool.c \
	dsl_prop.c \
	dsl_scan.c \
	dsl_synctask.c \
	fm.c \
	gzip.c \
	lzjb.c \
	metaslab.c \
	refcount.c \
	rrwlock.c \
	sa.c \
	sha256.c \
	spa.c \
	spa_boot.c \
	spa_config.c \
	spa_errlog.c \
	spa_history.c \
	spa_misc.c \
	space_map.c \
	txg.c \
	uberblock.c \
	unique.c \
	vdev.c \
	vdev_cache.c \
	vdev_disk.c \
	vdev_file.c \
	vdev_label.c \
	vdev_mirror.c \
	vdev_missing.c \
	vdev_queue.c \
	vdev_raidz.c \
	vdev_root.c \
	zap.c \
	zap_leaf.c \
	zap_micro.c \
	zfeature.c \
	zfeature_common.c \
	zfs_acl.c \
	zfs_byteswap.c \
	zfs_debug.c \
	zfs_dir.c \
	zfs_fm.c \
	zfs_fuid.c \
	zfs_ioctl.c \
	zfs_log.c \
	zfs_onexit.c \
	zfs_osx.c \
	zfs_rlock.c \
	zfs_vfsops.c \
	zfs_vnops.c \
	zfs_znode.c \
	zil.c \
	zio.c \
	zio_checksum.c \
	zio_compress.c \
	zio_inject.c \
	zle.c \
	zrlock.c \
	zvol.c \
	../avl/avl.c \
	../nvpair/fnvpair.c \
	../nvpair/nvpair.c \
	../nvpair/nvpair_alloc_fixed.c \
	../nvpair/nvpair_alloc_spl.c \
	../unicode/u8_textprep.c \
	../unicode/uconv.c \
	../zcommon/zfs_comutil.c \
	../zcommon/zfs_deleg.c \
	../zcommon/zfs_fletcher.c \
	../zcommon/zfs_namecheck.c \
	../zcommon/zfs_prop.c \
	../zcommon/zpool_prop.c \
	../zcommon/zprop_common.c

zfs_CPPFLAGS=$(CFLAGS_KMOD)
zfs_LDFLAGS=$(LINKFLAGS_KMOD)

dist_noinst_DATA = $(PLIST_STRING) $(INFO_PLIST)

zfs.kext : zfs $(PLIST_STRING) $(INFO_PLIST)
		@echo ""
		@mkdir -p zfs.kext/Contents/Resources/English.lproj zfs.kext/Contents/MacOS
	@cp -f $(INFO_PLIST) zfs.kext/Contents/
	@cp -f $(PLIST_STRING) zfs.kext/Contents/Resources/English.lproj/
	@cp -f zfs zfs.kext/Contents/MacOS/
	@kextlibs -undef-symbols -xml zfs.kext/ || echo "lots of warnings to ignore here"
	@echo ""
	@echo "To load module, use;"
	@echo "    rsync -ar --delete module/zfs/zfs.kext/ /tmp/zfs.kext/"
	@echo "    chown -R root:wheel /tmp/zfs.kext"
	@echo "    kextload -r /tmp/ -v /tmp/zfs.kext/"
	@echo ""

install-exec-local :
	echo "There is no install yet, don't do it."
	exit 1

clean:
	rm -rf zfs.kext/
	rm -f *.o *.lo