/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 15899 $ of $
 *
 * $Id:$
 */
/** @ingroup interface: Routines to interface to Net-SNMP
 *
 * \warning This code should not be modified, called directly,
 *          or used to interpret functionality. It is subject to
 *          change at any time.
 * 
 * @{
 */
/*
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 * ***                                                               ***
 * ***  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE  ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THIS FILE DOES NOT CONTAIN ANY USER EDITABLE CODE.      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THE GENERATED CODE IS INTERNAL IMPLEMENTATION, AND      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***    IS SUBJECT TO CHANGE WITHOUT WARNING IN FUTURE RELEASES.   ***
 * ***                                                               ***
 * ***                                                               ***
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 */
#ifndef IPIFSTATSTABLE_INTERFACE_H
#define IPIFSTATSTABLE_INTERFACE_H

#ifdef __cplusplus
extern          "C" {
#endif


#include "ipIfStatsTable.h"


    /*
     ********************************************************************
     * Table declarations
     */

    /*
     * PUBLIC interface initialization routine 
     */
    void           
        _ipIfStatsTable_initialize_interface(ipIfStatsTable_registration *
                                             user_ctx, u_long flags);
    void           
        _ipIfStatsTable_shutdown_interface(ipIfStatsTable_registration *
                                           user_ctx);

    ipIfStatsTable_registration *ipIfStatsTable_registration_get(void);

    ipIfStatsTable_registration
        *ipIfStatsTable_registration_set(ipIfStatsTable_registration *
                                         newreg);

    netsnmp_container *ipIfStatsTable_container_get(void);
    int             ipIfStatsTable_container_size(void);

    ipIfStatsTable_rowreq_ctx
        *ipIfStatsTable_allocate_rowreq_ctx(ipIfStatsTable_data *, void *);
    void           
        ipIfStatsTable_release_rowreq_ctx(ipIfStatsTable_rowreq_ctx *
                                          rowreq_ctx);

    int             ipIfStatsTable_index_to_oid(netsnmp_index * oid_idx,
                                                ipIfStatsTable_mib_index *
                                                mib_idx);
    int             ipIfStatsTable_index_from_oid(netsnmp_index * oid_idx,
                                                  ipIfStatsTable_mib_index
                                                  * mib_idx);

    /*
     * access to certain internals. use with caution!
     */
    void            ipIfStatsTable_valid_columns_set(netsnmp_column_info
                                                     *vc);

    /*
     */
    void            ipIfStatsTable_lastChange_set(u_long uptime);


#ifdef __cplusplus
}
#endif
#endif                          /* IPIFSTATSTABLE_INTERFACE_H */
/** @} */
