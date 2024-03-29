# PySNMP SMI module. Autogenerated from smidump -f python MY-MIB
# by libsmi2pysnmp-0.1.3 at Tue Apr 11 21:57:19 2017,
# Python version sys.version_info(major=2, minor=7, micro=12, releaselevel='final', serial=0)

# Imports

( Integer, ObjectIdentifier, OctetString, ) = mibBuilder.importSymbols("ASN1", "Integer", "ObjectIdentifier", "OctetString")
( NamedValues, ) = mibBuilder.importSymbols("ASN1-ENUMERATION", "NamedValues")
( ConstraintsIntersection, ConstraintsUnion, SingleValueConstraint, ValueRangeConstraint, ValueSizeConstraint, ) = mibBuilder.importSymbols("ASN1-REFINEMENT", "ConstraintsIntersection", "ConstraintsUnion", "SingleValueConstraint", "ValueRangeConstraint", "ValueSizeConstraint")
( Bits, Integer32, Integer32, MibIdentifier, NotificationType, MibScalar, MibTable, MibTableRow, MibTableColumn, TimeTicks, enterprises, ) = mibBuilder.importSymbols("SNMPv2-SMI", "Bits", "Integer32", "Integer32", "MibIdentifier", "NotificationType", "MibScalar", "MibTable", "MibTableRow", "MibTableColumn", "TimeTicks", "enterprises")

# Objects

mySystemInfo = MibIdentifier((1, 3, 6, 1, 4, 1, 42))

platform = MibScalar((1, 3, 6, 1, 4, 1, 42, 1), OctetString()).setMaxAccess("readwrite")
platformRelease = MibScalar((1, 3, 6, 1, 4, 1, 42, 2), OctetString()).setMaxAccess("readwrite")
platformVersion = MibScalar((1, 3, 6, 1, 4, 1, 42, 3), OctetString()).setMaxAccess("readwrite")
architecture = MibScalar((1, 3, 6, 1, 4, 1, 42, 4), OctetString()).setMaxAccess("readwrite")
hostname = MibScalar((1, 3, 6, 1, 4, 1, 42, 5), OctetString()).setMaxAccess("readwrite")
ipAddress = MibScalar((1, 3, 6, 1, 4, 1, 42, 6), OctetString()).setMaxAccess("readwrite")
macAddress = MibScalar((1, 3, 6, 1, 4, 1, 42, 7), OctetString()).setMaxAccess("readwrite")
processor = MibScalar((1, 3, 6, 1, 4, 1, 42, 8), OctetString()).setMaxAccess("readwrite")
ram = MibScalar((1, 3, 6, 1, 4, 1, 42, 9), OctetString()).setMaxAccess("readwrite")

# Augmentions

# Exports
# Objects
mibBuilder.exportSymbols("MY-MIB", mySystemInfo=mySystemInfo, platform=platform, platformRelease=platformRelease, 
                                    platformVersion=platformVersion, architecture=architecture, hostname=hostname,
                                    ipAddress=ipAddress, macAddress=macAddress, processor=processor, ram=ram
                                    )

