/*
 * This C file has been generated by smidump 0.4.5.
 * It is intended to be used with the NET-SNMP library.
 *
 * This C file is derived from the SNMPv2-MIB module.
 *
 * $Id: snmpv2-mib-mgr-stub.c 1564 2008-02-05 15:31:35Z schoenw $
 */

#include <stdlib.h>

#include <ucd-snmp/asn1.h>
#include <ucd-snmp/snmp.h>
#include <ucd-snmp/snmp_api.h>
#include <ucd-snmp/snmp_client.h>

#include "snmpv2-mib.h"

static oid sysDescr[] = {1, 3, 6, 1, 2, 1, 1, 1};
static oid sysObjectID[] = {1, 3, 6, 1, 2, 1, 1, 2};
static oid sysUpTime[] = {1, 3, 6, 1, 2, 1, 1, 3};
static oid sysContact[] = {1, 3, 6, 1, 2, 1, 1, 4};
static oid sysName[] = {1, 3, 6, 1, 2, 1, 1, 5};
static oid sysLocation[] = {1, 3, 6, 1, 2, 1, 1, 6};
static oid sysServices[] = {1, 3, 6, 1, 2, 1, 1, 7};
static oid sysORLastChange[] = {1, 3, 6, 1, 2, 1, 1, 8};
static oid sysORIndex[] = {1, 3, 6, 1, 2, 1, 1, 9, 1, 1};
static oid sysORID[] = {1, 3, 6, 1, 2, 1, 1, 9, 1, 2};
static oid sysORDescr[] = {1, 3, 6, 1, 2, 1, 1, 9, 1, 3};
static oid sysORUpTime[] = {1, 3, 6, 1, 2, 1, 1, 9, 1, 4};
static oid snmpInPkts[] = {1, 3, 6, 1, 2, 1, 11, 1};
static oid snmpOutPkts[] = {1, 3, 6, 1, 2, 1, 11, 2};
static oid snmpInBadVersions[] = {1, 3, 6, 1, 2, 1, 11, 3};
static oid snmpInBadCommunityNames[] = {1, 3, 6, 1, 2, 1, 11, 4};
static oid snmpInBadCommunityUses[] = {1, 3, 6, 1, 2, 1, 11, 5};
static oid snmpInASNParseErrs[] = {1, 3, 6, 1, 2, 1, 11, 6};
static oid snmpInTooBigs[] = {1, 3, 6, 1, 2, 1, 11, 8};
static oid snmpInNoSuchNames[] = {1, 3, 6, 1, 2, 1, 11, 9};
static oid snmpInBadValues[] = {1, 3, 6, 1, 2, 1, 11, 10};
static oid snmpInReadOnlys[] = {1, 3, 6, 1, 2, 1, 11, 11};
static oid snmpInGenErrs[] = {1, 3, 6, 1, 2, 1, 11, 12};
static oid snmpInTotalReqVars[] = {1, 3, 6, 1, 2, 1, 11, 13};
static oid snmpInTotalSetVars[] = {1, 3, 6, 1, 2, 1, 11, 14};
static oid snmpInGetRequests[] = {1, 3, 6, 1, 2, 1, 11, 15};
static oid snmpInGetNexts[] = {1, 3, 6, 1, 2, 1, 11, 16};
static oid snmpInSetRequests[] = {1, 3, 6, 1, 2, 1, 11, 17};
static oid snmpInGetResponses[] = {1, 3, 6, 1, 2, 1, 11, 18};
static oid snmpInTraps[] = {1, 3, 6, 1, 2, 1, 11, 19};
static oid snmpOutTooBigs[] = {1, 3, 6, 1, 2, 1, 11, 20};
static oid snmpOutNoSuchNames[] = {1, 3, 6, 1, 2, 1, 11, 21};
static oid snmpOutBadValues[] = {1, 3, 6, 1, 2, 1, 11, 22};
static oid snmpOutGenErrs[] = {1, 3, 6, 1, 2, 1, 11, 24};
static oid snmpOutGetRequests[] = {1, 3, 6, 1, 2, 1, 11, 25};
static oid snmpOutGetNexts[] = {1, 3, 6, 1, 2, 1, 11, 26};
static oid snmpOutSetRequests[] = {1, 3, 6, 1, 2, 1, 11, 27};
static oid snmpOutGetResponses[] = {1, 3, 6, 1, 2, 1, 11, 28};
static oid snmpOutTraps[] = {1, 3, 6, 1, 2, 1, 11, 29};
static oid snmpEnableAuthenTraps[] = {1, 3, 6, 1, 2, 1, 11, 30};
static oid snmpSilentDrops[] = {1, 3, 6, 1, 2, 1, 11, 31};
static oid snmpProxyDrops[] = {1, 3, 6, 1, 2, 1, 11, 32};
static oid snmpSetSerialNo[] = {1, 3, 6, 1, 6, 3, 1, 1, 6, 1};

int snmpv2_mib_mgr_get_system(struct snmp_session *s, system_t **system)
{
    struct snmp_session *peer;
    struct snmp_pdu *request, *response;
    struct variable_list *vars;
    int status;

    request = snmp_pdu_create(SNMP_MSG_GETNEXT);
    snmp_add_null_var(request, sysDescr, sizeof(sysDescr)/sizeof(oid));
    snmp_add_null_var(request, sysObjectID, sizeof(sysObjectID)/sizeof(oid));
    snmp_add_null_var(request, sysUpTime, sizeof(sysUpTime)/sizeof(oid));
    snmp_add_null_var(request, sysContact, sizeof(sysContact)/sizeof(oid));
    snmp_add_null_var(request, sysName, sizeof(sysName)/sizeof(oid));
    snmp_add_null_var(request, sysLocation, sizeof(sysLocation)/sizeof(oid));
    snmp_add_null_var(request, sysServices, sizeof(sysServices)/sizeof(oid));
    snmp_add_null_var(request, sysORLastChange, sizeof(sysORLastChange)/sizeof(oid));

    peer = snmp_open(s);
    if (!peer) {
        snmp_free_pdu(request);
        return -1;
    }

    status = snmp_synch_response(peer, request, &response);
    if (status != STAT_SUCCESS) {
        if (response) snmp_free_pdu(response);
        snmp_close(peer);
        return -2;
    }

    *system = (system_t *) malloc(sizeof(system_t));
    if (! *system) {
        if (response) snmp_free_pdu(response);
        snmp_close(peer);
        return -4;
    }

    for (vars = response->variables; vars; vars = vars->next_variable) {
        if (vars->name_length > sizeof(sysDescr)/sizeof(oid)
            && memcmp(vars->name, sysDescr, sizeof(sysDescr)) == 0) {
            memcpy((*system)->__sysDescr, vars->val.string, vars->val_len);
            (*system)->_sysDescrLength = vars->val_len;
            (*system)->sysDescr = (*system)->__sysDescr;
        }
        if (vars->name_length > sizeof(sysObjectID)/sizeof(oid)
            && memcmp(vars->name, sysObjectID, sizeof(sysObjectID)) == 0) {
        }
        if (vars->name_length > sizeof(sysUpTime)/sizeof(oid)
            && memcmp(vars->name, sysUpTime, sizeof(sysUpTime)) == 0) {
            (*system)->__sysUpTime = *vars->val.integer;
            (*system)->sysUpTime = &((*system)->__sysUpTime);
        }
        if (vars->name_length > sizeof(sysContact)/sizeof(oid)
            && memcmp(vars->name, sysContact, sizeof(sysContact)) == 0) {
            memcpy((*system)->__sysContact, vars->val.string, vars->val_len);
            (*system)->_sysContactLength = vars->val_len;
            (*system)->sysContact = (*system)->__sysContact;
        }
        if (vars->name_length > sizeof(sysName)/sizeof(oid)
            && memcmp(vars->name, sysName, sizeof(sysName)) == 0) {
            memcpy((*system)->__sysName, vars->val.string, vars->val_len);
            (*system)->_sysNameLength = vars->val_len;
            (*system)->sysName = (*system)->__sysName;
        }
        if (vars->name_length > sizeof(sysLocation)/sizeof(oid)
            && memcmp(vars->name, sysLocation, sizeof(sysLocation)) == 0) {
            memcpy((*system)->__sysLocation, vars->val.string, vars->val_len);
            (*system)->_sysLocationLength = vars->val_len;
            (*system)->sysLocation = (*system)->__sysLocation;
        }
        if (vars->name_length > sizeof(sysServices)/sizeof(oid)
            && memcmp(vars->name, sysServices, sizeof(sysServices)) == 0) {
            (*system)->__sysServices = *vars->val.integer;
            (*system)->sysServices = &((*system)->__sysServices);
        }
        if (vars->name_length > sizeof(sysORLastChange)/sizeof(oid)
            && memcmp(vars->name, sysORLastChange, sizeof(sysORLastChange)) == 0) {
            (*system)->__sysORLastChange = *vars->val.integer;
            (*system)->sysORLastChange = &((*system)->__sysORLastChange);
        }
    }

    if (response) snmp_free_pdu(response);

    if (snmp_close(peer) == 0) {
        return -5;
    }

    return 0;
}

int snmpv2_mib_mgr_get_sysOREntry(struct snmp_session *s, sysOREntry_t **sysOREntry)
{
    struct snmp_session *peer;
    struct snmp_pdu *request, *response;
    struct variable_list *vars;
    int status;

    request = snmp_pdu_create(SNMP_MSG_GETNEXT);
    snmp_add_null_var(request, sysORID, sizeof(sysORID)/sizeof(oid));
    snmp_add_null_var(request, sysORDescr, sizeof(sysORDescr)/sizeof(oid));
    snmp_add_null_var(request, sysORUpTime, sizeof(sysORUpTime)/sizeof(oid));

    peer = snmp_open(s);
    if (!peer) {
        snmp_free_pdu(request);
        return -1;
    }

    status = snmp_synch_response(peer, request, &response);
    if (status != STAT_SUCCESS) {
        if (response) snmp_free_pdu(response);
        snmp_close(peer);
        return -2;
    }

    *sysOREntry = (sysOREntry_t *) malloc(sizeof(sysOREntry_t));
    if (! *sysOREntry) {
        if (response) snmp_free_pdu(response);
        snmp_close(peer);
        return -4;
    }

    for (vars = response->variables; vars; vars = vars->next_variable) {
        if (vars->name_length > sizeof(sysORID)/sizeof(oid)
            && memcmp(vars->name, sysORID, sizeof(sysORID)) == 0) {
        }
        if (vars->name_length > sizeof(sysORDescr)/sizeof(oid)
            && memcmp(vars->name, sysORDescr, sizeof(sysORDescr)) == 0) {
            memcpy((*sysOREntry)->__sysORDescr, vars->val.string, vars->val_len);
            (*sysOREntry)->_sysORDescrLength = vars->val_len;
            (*sysOREntry)->sysORDescr = (*sysOREntry)->__sysORDescr;
        }
        if (vars->name_length > sizeof(sysORUpTime)/sizeof(oid)
            && memcmp(vars->name, sysORUpTime, sizeof(sysORUpTime)) == 0) {
            (*sysOREntry)->__sysORUpTime = *vars->val.integer;
            (*sysOREntry)->sysORUpTime = &((*sysOREntry)->__sysORUpTime);
        }
    }

    if (response) snmp_free_pdu(response);

    if (snmp_close(peer) == 0) {
        return -5;
    }

    return 0;
}

int snmpv2_mib_mgr_get_snmp(struct snmp_session *s, snmp_t **snmp)
{
    struct snmp_session *peer;
    struct snmp_pdu *request, *response;
    struct variable_list *vars;
    int status;

    request = snmp_pdu_create(SNMP_MSG_GETNEXT);
    snmp_add_null_var(request, snmpInPkts, sizeof(snmpInPkts)/sizeof(oid));
    snmp_add_null_var(request, snmpOutPkts, sizeof(snmpOutPkts)/sizeof(oid));
    snmp_add_null_var(request, snmpInBadVersions, sizeof(snmpInBadVersions)/sizeof(oid));
    snmp_add_null_var(request, snmpInBadCommunityNames, sizeof(snmpInBadCommunityNames)/sizeof(oid));
    snmp_add_null_var(request, snmpInBadCommunityUses, sizeof(snmpInBadCommunityUses)/sizeof(oid));
    snmp_add_null_var(request, snmpInASNParseErrs, sizeof(snmpInASNParseErrs)/sizeof(oid));
    snmp_add_null_var(request, snmpInTooBigs, sizeof(snmpInTooBigs)/sizeof(oid));
    snmp_add_null_var(request, snmpInNoSuchNames, sizeof(snmpInNoSuchNames)/sizeof(oid));
    snmp_add_null_var(request, snmpInBadValues, sizeof(snmpInBadValues)/sizeof(oid));
    snmp_add_null_var(request, snmpInReadOnlys, sizeof(snmpInReadOnlys)/sizeof(oid));
    snmp_add_null_var(request, snmpInGenErrs, sizeof(snmpInGenErrs)/sizeof(oid));
    snmp_add_null_var(request, snmpInTotalReqVars, sizeof(snmpInTotalReqVars)/sizeof(oid));
    snmp_add_null_var(request, snmpInTotalSetVars, sizeof(snmpInTotalSetVars)/sizeof(oid));
    snmp_add_null_var(request, snmpInGetRequests, sizeof(snmpInGetRequests)/sizeof(oid));
    snmp_add_null_var(request, snmpInGetNexts, sizeof(snmpInGetNexts)/sizeof(oid));
    snmp_add_null_var(request, snmpInSetRequests, sizeof(snmpInSetRequests)/sizeof(oid));
    snmp_add_null_var(request, snmpInGetResponses, sizeof(snmpInGetResponses)/sizeof(oid));
    snmp_add_null_var(request, snmpInTraps, sizeof(snmpInTraps)/sizeof(oid));
    snmp_add_null_var(request, snmpOutTooBigs, sizeof(snmpOutTooBigs)/sizeof(oid));
    snmp_add_null_var(request, snmpOutNoSuchNames, sizeof(snmpOutNoSuchNames)/sizeof(oid));
    snmp_add_null_var(request, snmpOutBadValues, sizeof(snmpOutBadValues)/sizeof(oid));
    snmp_add_null_var(request, snmpOutGenErrs, sizeof(snmpOutGenErrs)/sizeof(oid));
    snmp_add_null_var(request, snmpOutGetRequests, sizeof(snmpOutGetRequests)/sizeof(oid));
    snmp_add_null_var(request, snmpOutGetNexts, sizeof(snmpOutGetNexts)/sizeof(oid));
    snmp_add_null_var(request, snmpOutSetRequests, sizeof(snmpOutSetRequests)/sizeof(oid));
    snmp_add_null_var(request, snmpOutGetResponses, sizeof(snmpOutGetResponses)/sizeof(oid));
    snmp_add_null_var(request, snmpOutTraps, sizeof(snmpOutTraps)/sizeof(oid));
    snmp_add_null_var(request, snmpEnableAuthenTraps, sizeof(snmpEnableAuthenTraps)/sizeof(oid));
    snmp_add_null_var(request, snmpSilentDrops, sizeof(snmpSilentDrops)/sizeof(oid));
    snmp_add_null_var(request, snmpProxyDrops, sizeof(snmpProxyDrops)/sizeof(oid));

    peer = snmp_open(s);
    if (!peer) {
        snmp_free_pdu(request);
        return -1;
    }

    status = snmp_synch_response(peer, request, &response);
    if (status != STAT_SUCCESS) {
        if (response) snmp_free_pdu(response);
        snmp_close(peer);
        return -2;
    }

    *snmp = (snmp_t *) malloc(sizeof(snmp_t));
    if (! *snmp) {
        if (response) snmp_free_pdu(response);
        snmp_close(peer);
        return -4;
    }

    for (vars = response->variables; vars; vars = vars->next_variable) {
        if (vars->name_length > sizeof(snmpInPkts)/sizeof(oid)
            && memcmp(vars->name, snmpInPkts, sizeof(snmpInPkts)) == 0) {
            (*snmp)->__snmpInPkts = *vars->val.integer;
            (*snmp)->snmpInPkts = &((*snmp)->__snmpInPkts);
        }
        if (vars->name_length > sizeof(snmpOutPkts)/sizeof(oid)
            && memcmp(vars->name, snmpOutPkts, sizeof(snmpOutPkts)) == 0) {
            (*snmp)->__snmpOutPkts = *vars->val.integer;
            (*snmp)->snmpOutPkts = &((*snmp)->__snmpOutPkts);
        }
        if (vars->name_length > sizeof(snmpInBadVersions)/sizeof(oid)
            && memcmp(vars->name, snmpInBadVersions, sizeof(snmpInBadVersions)) == 0) {
            (*snmp)->__snmpInBadVersions = *vars->val.integer;
            (*snmp)->snmpInBadVersions = &((*snmp)->__snmpInBadVersions);
        }
        if (vars->name_length > sizeof(snmpInBadCommunityNames)/sizeof(oid)
            && memcmp(vars->name, snmpInBadCommunityNames, sizeof(snmpInBadCommunityNames)) == 0) {
            (*snmp)->__snmpInBadCommunityNames = *vars->val.integer;
            (*snmp)->snmpInBadCommunityNames = &((*snmp)->__snmpInBadCommunityNames);
        }
        if (vars->name_length > sizeof(snmpInBadCommunityUses)/sizeof(oid)
            && memcmp(vars->name, snmpInBadCommunityUses, sizeof(snmpInBadCommunityUses)) == 0) {
            (*snmp)->__snmpInBadCommunityUses = *vars->val.integer;
            (*snmp)->snmpInBadCommunityUses = &((*snmp)->__snmpInBadCommunityUses);
        }
        if (vars->name_length > sizeof(snmpInASNParseErrs)/sizeof(oid)
            && memcmp(vars->name, snmpInASNParseErrs, sizeof(snmpInASNParseErrs)) == 0) {
            (*snmp)->__snmpInASNParseErrs = *vars->val.integer;
            (*snmp)->snmpInASNParseErrs = &((*snmp)->__snmpInASNParseErrs);
        }
        if (vars->name_length > sizeof(snmpInTooBigs)/sizeof(oid)
            && memcmp(vars->name, snmpInTooBigs, sizeof(snmpInTooBigs)) == 0) {
            (*snmp)->__snmpInTooBigs = *vars->val.integer;
            (*snmp)->snmpInTooBigs = &((*snmp)->__snmpInTooBigs);
        }
        if (vars->name_length > sizeof(snmpInNoSuchNames)/sizeof(oid)
            && memcmp(vars->name, snmpInNoSuchNames, sizeof(snmpInNoSuchNames)) == 0) {
            (*snmp)->__snmpInNoSuchNames = *vars->val.integer;
            (*snmp)->snmpInNoSuchNames = &((*snmp)->__snmpInNoSuchNames);
        }
        if (vars->name_length > sizeof(snmpInBadValues)/sizeof(oid)
            && memcmp(vars->name, snmpInBadValues, sizeof(snmpInBadValues)) == 0) {
            (*snmp)->__snmpInBadValues = *vars->val.integer;
            (*snmp)->snmpInBadValues = &((*snmp)->__snmpInBadValues);
        }
        if (vars->name_length > sizeof(snmpInReadOnlys)/sizeof(oid)
            && memcmp(vars->name, snmpInReadOnlys, sizeof(snmpInReadOnlys)) == 0) {
            (*snmp)->__snmpInReadOnlys = *vars->val.integer;
            (*snmp)->snmpInReadOnlys = &((*snmp)->__snmpInReadOnlys);
        }
        if (vars->name_length > sizeof(snmpInGenErrs)/sizeof(oid)
            && memcmp(vars->name, snmpInGenErrs, sizeof(snmpInGenErrs)) == 0) {
            (*snmp)->__snmpInGenErrs = *vars->val.integer;
            (*snmp)->snmpInGenErrs = &((*snmp)->__snmpInGenErrs);
        }
        if (vars->name_length > sizeof(snmpInTotalReqVars)/sizeof(oid)
            && memcmp(vars->name, snmpInTotalReqVars, sizeof(snmpInTotalReqVars)) == 0) {
            (*snmp)->__snmpInTotalReqVars = *vars->val.integer;
            (*snmp)->snmpInTotalReqVars = &((*snmp)->__snmpInTotalReqVars);
        }
        if (vars->name_length > sizeof(snmpInTotalSetVars)/sizeof(oid)
            && memcmp(vars->name, snmpInTotalSetVars, sizeof(snmpInTotalSetVars)) == 0) {
            (*snmp)->__snmpInTotalSetVars = *vars->val.integer;
            (*snmp)->snmpInTotalSetVars = &((*snmp)->__snmpInTotalSetVars);
        }
        if (vars->name_length > sizeof(snmpInGetRequests)/sizeof(oid)
            && memcmp(vars->name, snmpInGetRequests, sizeof(snmpInGetRequests)) == 0) {
            (*snmp)->__snmpInGetRequests = *vars->val.integer;
            (*snmp)->snmpInGetRequests = &((*snmp)->__snmpInGetRequests);
        }
        if (vars->name_length > sizeof(snmpInGetNexts)/sizeof(oid)
            && memcmp(vars->name, snmpInGetNexts, sizeof(snmpInGetNexts)) == 0) {
            (*snmp)->__snmpInGetNexts = *vars->val.integer;
            (*snmp)->snmpInGetNexts = &((*snmp)->__snmpInGetNexts);
        }
        if (vars->name_length > sizeof(snmpInSetRequests)/sizeof(oid)
            && memcmp(vars->name, snmpInSetRequests, sizeof(snmpInSetRequests)) == 0) {
            (*snmp)->__snmpInSetRequests = *vars->val.integer;
            (*snmp)->snmpInSetRequests = &((*snmp)->__snmpInSetRequests);
        }
        if (vars->name_length > sizeof(snmpInGetResponses)/sizeof(oid)
            && memcmp(vars->name, snmpInGetResponses, sizeof(snmpInGetResponses)) == 0) {
            (*snmp)->__snmpInGetResponses = *vars->val.integer;
            (*snmp)->snmpInGetResponses = &((*snmp)->__snmpInGetResponses);
        }
        if (vars->name_length > sizeof(snmpInTraps)/sizeof(oid)
            && memcmp(vars->name, snmpInTraps, sizeof(snmpInTraps)) == 0) {
            (*snmp)->__snmpInTraps = *vars->val.integer;
            (*snmp)->snmpInTraps = &((*snmp)->__snmpInTraps);
        }
        if (vars->name_length > sizeof(snmpOutTooBigs)/sizeof(oid)
            && memcmp(vars->name, snmpOutTooBigs, sizeof(snmpOutTooBigs)) == 0) {
            (*snmp)->__snmpOutTooBigs = *vars->val.integer;
            (*snmp)->snmpOutTooBigs = &((*snmp)->__snmpOutTooBigs);
        }
        if (vars->name_length > sizeof(snmpOutNoSuchNames)/sizeof(oid)
            && memcmp(vars->name, snmpOutNoSuchNames, sizeof(snmpOutNoSuchNames)) == 0) {
            (*snmp)->__snmpOutNoSuchNames = *vars->val.integer;
            (*snmp)->snmpOutNoSuchNames = &((*snmp)->__snmpOutNoSuchNames);
        }
        if (vars->name_length > sizeof(snmpOutBadValues)/sizeof(oid)
            && memcmp(vars->name, snmpOutBadValues, sizeof(snmpOutBadValues)) == 0) {
            (*snmp)->__snmpOutBadValues = *vars->val.integer;
            (*snmp)->snmpOutBadValues = &((*snmp)->__snmpOutBadValues);
        }
        if (vars->name_length > sizeof(snmpOutGenErrs)/sizeof(oid)
            && memcmp(vars->name, snmpOutGenErrs, sizeof(snmpOutGenErrs)) == 0) {
            (*snmp)->__snmpOutGenErrs = *vars->val.integer;
            (*snmp)->snmpOutGenErrs = &((*snmp)->__snmpOutGenErrs);
        }
        if (vars->name_length > sizeof(snmpOutGetRequests)/sizeof(oid)
            && memcmp(vars->name, snmpOutGetRequests, sizeof(snmpOutGetRequests)) == 0) {
            (*snmp)->__snmpOutGetRequests = *vars->val.integer;
            (*snmp)->snmpOutGetRequests = &((*snmp)->__snmpOutGetRequests);
        }
        if (vars->name_length > sizeof(snmpOutGetNexts)/sizeof(oid)
            && memcmp(vars->name, snmpOutGetNexts, sizeof(snmpOutGetNexts)) == 0) {
            (*snmp)->__snmpOutGetNexts = *vars->val.integer;
            (*snmp)->snmpOutGetNexts = &((*snmp)->__snmpOutGetNexts);
        }
        if (vars->name_length > sizeof(snmpOutSetRequests)/sizeof(oid)
            && memcmp(vars->name, snmpOutSetRequests, sizeof(snmpOutSetRequests)) == 0) {
            (*snmp)->__snmpOutSetRequests = *vars->val.integer;
            (*snmp)->snmpOutSetRequests = &((*snmp)->__snmpOutSetRequests);
        }
        if (vars->name_length > sizeof(snmpOutGetResponses)/sizeof(oid)
            && memcmp(vars->name, snmpOutGetResponses, sizeof(snmpOutGetResponses)) == 0) {
            (*snmp)->__snmpOutGetResponses = *vars->val.integer;
            (*snmp)->snmpOutGetResponses = &((*snmp)->__snmpOutGetResponses);
        }
        if (vars->name_length > sizeof(snmpOutTraps)/sizeof(oid)
            && memcmp(vars->name, snmpOutTraps, sizeof(snmpOutTraps)) == 0) {
            (*snmp)->__snmpOutTraps = *vars->val.integer;
            (*snmp)->snmpOutTraps = &((*snmp)->__snmpOutTraps);
        }
        if (vars->name_length > sizeof(snmpEnableAuthenTraps)/sizeof(oid)
            && memcmp(vars->name, snmpEnableAuthenTraps, sizeof(snmpEnableAuthenTraps)) == 0) {
            (*snmp)->__snmpEnableAuthenTraps = *vars->val.integer;
            (*snmp)->snmpEnableAuthenTraps = &((*snmp)->__snmpEnableAuthenTraps);
        }
        if (vars->name_length > sizeof(snmpSilentDrops)/sizeof(oid)
            && memcmp(vars->name, snmpSilentDrops, sizeof(snmpSilentDrops)) == 0) {
            (*snmp)->__snmpSilentDrops = *vars->val.integer;
            (*snmp)->snmpSilentDrops = &((*snmp)->__snmpSilentDrops);
        }
        if (vars->name_length > sizeof(snmpProxyDrops)/sizeof(oid)
            && memcmp(vars->name, snmpProxyDrops, sizeof(snmpProxyDrops)) == 0) {
            (*snmp)->__snmpProxyDrops = *vars->val.integer;
            (*snmp)->snmpProxyDrops = &((*snmp)->__snmpProxyDrops);
        }
    }

    if (response) snmp_free_pdu(response);

    if (snmp_close(peer) == 0) {
        return -5;
    }

    return 0;
}

int snmpv2_mib_mgr_get_snmpSet(struct snmp_session *s, snmpSet_t **snmpSet)
{
    struct snmp_session *peer;
    struct snmp_pdu *request, *response;
    struct variable_list *vars;
    int status;

    request = snmp_pdu_create(SNMP_MSG_GETNEXT);
    snmp_add_null_var(request, snmpSetSerialNo, sizeof(snmpSetSerialNo)/sizeof(oid));

    peer = snmp_open(s);
    if (!peer) {
        snmp_free_pdu(request);
        return -1;
    }

    status = snmp_synch_response(peer, request, &response);
    if (status != STAT_SUCCESS) {
        if (response) snmp_free_pdu(response);
        snmp_close(peer);
        return -2;
    }

    *snmpSet = (snmpSet_t *) malloc(sizeof(snmpSet_t));
    if (! *snmpSet) {
        if (response) snmp_free_pdu(response);
        snmp_close(peer);
        return -4;
    }

    for (vars = response->variables; vars; vars = vars->next_variable) {
        if (vars->name_length > sizeof(snmpSetSerialNo)/sizeof(oid)
            && memcmp(vars->name, snmpSetSerialNo, sizeof(snmpSetSerialNo)) == 0) {
            (*snmpSet)->__snmpSetSerialNo = *vars->val.integer;
            (*snmpSet)->snmpSetSerialNo = &((*snmpSet)->__snmpSetSerialNo);
        }
    }

    if (response) snmp_free_pdu(response);

    if (snmp_close(peer) == 0) {
        return -5;
    }

    return 0;
}


