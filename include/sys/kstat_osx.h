#ifndef KSTAT_OSX_INCLUDED
#define KSTAT_OSX_INCLUDED

typedef struct osx_kstat {
	kstat_named_t spa_version;
	kstat_named_t zpl_version;

	kstat_named_t darwin_active_vnodes;
	kstat_named_t darwin_debug;
	kstat_named_t darwin_ignore_negatives;
	kstat_named_t darwin_ignore_positives;
	kstat_named_t darwin_create_negatives;
	kstat_named_t darwin_force_formd_normalized;
	kstat_named_t darwin_skip_unlinked_drain;

	kstat_named_t arc_zfs_arc_max;
	kstat_named_t arc_zfs_arc_min;
	kstat_named_t arc_zfs_arc_meta_limit;
	kstat_named_t arc_zfs_arc_meta_min;
	kstat_named_t arc_zfs_arc_grow_retry;
	kstat_named_t arc_zfs_arc_shrink_shift;
	kstat_named_t arc_zfs_arc_p_min_shift;
	kstat_named_t arc_zfs_disable_dup_eviction;
	kstat_named_t arc_zfs_arc_average_blocksize;

	kstat_named_t l2arc_write_max;
	kstat_named_t l2arc_write_boost;
	kstat_named_t l2arc_headroom;
	kstat_named_t l2arc_headroom_boost;
	kstat_named_t l2arc_feed_secs;
	kstat_named_t l2arc_feed_min_ms;

	kstat_named_t zfs_vdev_max_active;
	kstat_named_t zfs_vdev_sync_read_min_active;
	kstat_named_t zfs_vdev_sync_read_max_active;
	kstat_named_t zfs_vdev_sync_write_min_active;
	kstat_named_t zfs_vdev_sync_write_max_active;
	kstat_named_t zfs_vdev_async_read_min_active;
	kstat_named_t zfs_vdev_async_read_max_active;
	kstat_named_t zfs_vdev_async_write_min_active;
	kstat_named_t zfs_vdev_async_write_max_active;
	kstat_named_t zfs_vdev_scrub_min_active;
	kstat_named_t zfs_vdev_scrub_max_active;
	kstat_named_t zfs_vdev_async_write_active_min_dirty_percent;
	kstat_named_t zfs_vdev_async_write_active_max_dirty_percent;
	kstat_named_t zfs_vdev_aggregation_limit;
	kstat_named_t zfs_vdev_read_gap_limit;
	kstat_named_t zfs_vdev_write_gap_limit;

	kstat_named_t arc_reduce_dnlc_percent;
	kstat_named_t arc_lotsfree_percent;
	kstat_named_t zfs_dirty_data_max;
	kstat_named_t zfs_dirty_data_sync;
	kstat_named_t zfs_delay_max_ns;
	kstat_named_t zfs_delay_min_dirty_percent;
	kstat_named_t zfs_delay_scale;
	kstat_named_t spa_asize_inflation;
	kstat_named_t zfs_mdcomp_disable;
	kstat_named_t zfs_prefetch_disable;
	kstat_named_t zfetch_max_streams;
	kstat_named_t zfetch_min_sec_reap;
	kstat_named_t zfetch_array_rd_sz;
	kstat_named_t zfs_default_bs;
	kstat_named_t zfs_default_ibs;
	kstat_named_t metaslab_aliquot;
	kstat_named_t spa_max_replication_override;
	kstat_named_t spa_mode_global;
	kstat_named_t zfs_flags;
	kstat_named_t zfs_txg_timeout;
	kstat_named_t zfs_vdev_cache_max;
	kstat_named_t zfs_vdev_cache_size;
	kstat_named_t zfs_vdev_cache_bshift;
	kstat_named_t vdev_mirror_shift;
	kstat_named_t zfs_scrub_limit;
	kstat_named_t zfs_no_scrub_io;
	kstat_named_t zfs_no_scrub_prefetch;
	kstat_named_t fzap_default_block_shift;
	kstat_named_t zfs_immediate_write_sz;
	kstat_named_t zfs_read_chunk_size;
	kstat_named_t zfs_nocacheflush;
	kstat_named_t zil_replay_disable;
	kstat_named_t metaslab_gang_bang;
	kstat_named_t metaslab_df_alloc_threshold;
	kstat_named_t metaslab_df_free_pct;
	kstat_named_t zio_injection_enabled;
	kstat_named_t zvol_immediate_write_sz;

	kstat_named_t l2arc_noprefetch;
	kstat_named_t l2arc_feed_again;
	kstat_named_t l2arc_norw;

	kstat_named_t zfs_top_maxinflight;
	kstat_named_t zfs_resilver_delay;
	kstat_named_t zfs_scrub_delay;
	kstat_named_t zfs_scan_idle;

	kstat_named_t zfs_recover;

  kstat_named_t zfs_free_max_blocks;


} osx_kstat_t;


extern unsigned int debug_vnop_osx_printf;
extern unsigned int zfs_vnop_ignore_negatives;
extern unsigned int zfs_vnop_ignore_positives;
extern unsigned int zfs_vnop_create_negatives;
extern unsigned int zfs_vnop_skip_unlinked_drain;
extern uint64_t vnop_num_vnodes;

extern uint64_t zfs_arc_max;
extern uint64_t zfs_arc_min;
extern uint64_t zfs_arc_meta_limit;
extern uint64_t zfs_arc_meta_min;
extern int zfs_arc_grow_retry;
extern int zfs_arc_shrink_shift;
extern int zfs_arc_p_min_shift;
extern int zfs_disable_dup_eviction;
extern int zfs_arc_average_blocksize;

extern uint64_t l2arc_write_max;
extern uint64_t l2arc_write_boost;
extern uint64_t l2arc_headroom;
extern uint64_t l2arc_headroom_boost;
extern uint64_t l2arc_feed_secs;
extern uint64_t l2arc_feed_min_ms;

extern uint32_t zfs_vdev_max_active;
extern uint32_t zfs_vdev_sync_read_min_active;
extern uint32_t zfs_vdev_sync_read_max_active;
extern uint32_t zfs_vdev_sync_write_min_active;
extern uint32_t zfs_vdev_sync_write_max_active;
extern uint32_t zfs_vdev_async_read_min_active;
extern uint32_t zfs_vdev_async_read_max_active;
extern uint32_t zfs_vdev_async_write_min_active;
extern uint32_t zfs_vdev_async_write_max_active;
extern uint32_t zfs_vdev_scrub_min_active;
extern uint32_t zfs_vdev_scrub_max_active;
extern int zfs_vdev_async_write_active_min_dirty_percent;
extern int zfs_vdev_async_write_active_max_dirty_percent;
extern int zfs_vdev_aggregation_limit;
extern int zfs_vdev_read_gap_limit;
extern int zfs_vdev_write_gap_limit;

extern uint_t arc_reduce_dnlc_percent;
extern int arc_lotsfree_percent;
extern hrtime_t zfs_delay_max_ns;
extern int spa_asize_inflation;
extern unsigned int	zfetch_max_streams;
extern unsigned int	zfetch_min_sec_reap;
extern int zfs_default_bs;
extern int zfs_default_ibs;
extern uint64_t metaslab_aliquot;
extern int zfs_vdev_cache_max;
extern int spa_max_replication_override;
extern int zfs_no_scrub_io;
extern int zfs_no_scrub_prefetch;
extern ssize_t zfs_immediate_write_sz;
extern offset_t zfs_read_chunk_size;
extern uint64_t metaslab_gang_bang;
extern uint64_t metaslab_df_alloc_threshold;
extern int metaslab_df_free_pct;
extern ssize_t zvol_immediate_write_sz;

extern boolean_t l2arc_noprefetch;
extern boolean_t l2arc_feed_again;
extern boolean_t l2arc_norw;

extern int zfs_top_maxinflight;
extern int zfs_resilver_delay;
extern int zfs_scrub_delay;
extern int zfs_scan_idle;

extern uint32_t zfs_free_max_blocks;

int        kstat_osx_init(void);
void       kstat_osx_fini(void);

int arc_kstat_update(kstat_t *ksp, int rw);
int arc_kstat_update_osx(kstat_t *ksp, int rw);

#endif
