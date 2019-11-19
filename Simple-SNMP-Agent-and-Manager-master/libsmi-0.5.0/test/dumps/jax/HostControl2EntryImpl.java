/*
 * This Java file has been generated by smidump 0.4.5. It
 * is intended to be edited by the application programmer and
 * to be used within a Java AgentX sub-agent environment.
 *
 * $Id: HostControl2EntryImpl.java 1458 2006-05-29 16:21:11Z strauss $
 */

/**
    This class extends the Java AgentX (JAX) implementation of
    the table row hostControl2Entry defined in RMON2-MIB.
 */

import jax.AgentXOID;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;
import jax.AgentXEntry;

public class HostControl2EntryImpl extends HostControl2Entry
{

    // constructor
    public HostControl2EntryImpl()
    {
        super();
    }

    public long get_hostControlDroppedFrames()
    {
        return hostControlDroppedFrames;
    }

    public long get_hostControlCreateTime()
    {
        return hostControlCreateTime;
    }

}
