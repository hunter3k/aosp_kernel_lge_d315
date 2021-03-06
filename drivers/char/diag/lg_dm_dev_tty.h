#ifndef TTY_LGE_DM_DEV_H_
#define TTY_LGE_DM_DEV_H_

#ifdef CONFIG_LGE_DM_DEV

#define NUM_MODEM_CHIP    2

struct dm_dev_tty {
  wait_queue_head_t   waitq;
  struct task_struct *tty_ts;
  struct tty_driver *tty_drv;
  struct tty_struct *tty_str;
  int tty_state;
  int is_modem_open[NUM_MODEM_CHIP + 1];
  int proc_num;
  int read_length;
  int set_logging;
  struct workqueue_struct *dm_dev_wq;
  struct work_struct dm_dev_usb_work;
};

extern struct dm_dev_tty *lge_dm_dev_tty;





#endif /* CONFIG_LGE_DM_DEV */
#endif /*TTY_LGE_DM_H_ */

#endif /*                   */
#endif /*              */

#endif /* CONFIG_LGE_DM_DEV */
#endif /*TTY_LGE_DM_H_ */



#endif /*                   */
#endif /*              */


#endif /*                   */
#endif /*              */


