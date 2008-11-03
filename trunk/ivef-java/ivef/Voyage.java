/* 
 *  Voyage
 *
 *  Voyage is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Foobar is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY ); without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 **********************************************************************************
 *  WARNING: THIS CODE WAS GENERATED DO NOT MODIFY, CHANGE THE XSD INSTEAD
 *  Generated by xsd2code on Mon Nov 3 20:21:44 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

package ivef;

import java.util.*;
import java.text.DateFormat;
import java.text.SimpleDateFormat;


public class Voyage { 

    private String m_id; // default value is uninitialized
    private String m_sourceName; // default value is uninitialized
    private int m_source; // default value is uninitialized
    private int m_cargoType; // default value is uninitialized
    private boolean m_cargoTypePresent;
    private String m_destination; // default value is uninitialized
    private boolean m_destinationPresent;
    private Date m_ETA; // default value is uninitialized
    private boolean m_ETAPresent;
    private Date m_ATA; // default value is uninitialized
    private boolean m_ATAPresent;
    private double m_airDraught; // default value is uninitialized
    private boolean m_airDraughtPresent;
    private double m_draught; // default value is uninitialized
    private boolean m_draughtPresent;

    public Voyage() {

        m_cargoTypePresent = false;
        m_destinationPresent = false;
        m_ETAPresent = false;
        m_ATAPresent = false;
        m_airDraughtPresent = false;
        m_draughtPresent = false;
    }

    public Voyage(Voyage val) {

        m_id = val.getId();
        m_sourceName = val.getSourceName();
        m_source = val.getSource();
        m_cargoTypePresent = val.hasCargoType();
        m_cargoType = val.getCargoType();
        m_destinationPresent = val.hasDestination();
        m_destination = val.getDestination();
        m_ETAPresent = val.hasETA();
        m_ETA = val.getETA();
        m_ATAPresent = val.hasATA();
        m_ATA = val.getATA();
        m_airDraughtPresent = val.hasAirDraught();
        m_airDraught = val.getAirDraught();
        m_draughtPresent = val.hasDraught();
        m_draught = val.getDraught();
    }

    public void setId(String val) {

        m_id = val;
    }

    public String getId() {

        return m_id;
    }

    public void setSourceName(String val) {

        m_sourceName = val;
    }

    public String getSourceName() {

        return m_sourceName;
    }

    public void setSource(int val) {

        if ( ( val != 1 ) &&
             ( val != 2 ) &&
             ( val != 3 ) )
            return;
        m_source = val;
    }

    public int getSource() {

        return m_source;
    }

    public void setCargoType(int val) {

        if ( ( val != 0 ) &&
             ( val != 1 ) &&
             ( val != 2 ) &&
             ( val != 3 ) &&
             ( val != 4 ) &&
             ( val != 9 ) )
            return;
        m_cargoTypePresent = true;
        m_cargoType = val;
    }

    public int getCargoType() {

        return m_cargoType;
    }

    public boolean hasCargoType() {

        return m_cargoTypePresent;
    }

    public void setDestination(String val) {

        m_destinationPresent = true;
        m_destination = val;
    }

    public String getDestination() {

        return m_destination;
    }

    public boolean hasDestination() {

        return m_destinationPresent;
    }

    public void setETA(Date val) {

        m_ETAPresent = true;
        m_ETA = val;
    }

    public Date getETA() {

        return m_ETA;
    }

    public boolean hasETA() {

        return m_ETAPresent;
    }

    public void setATA(Date val) {

        m_ATAPresent = true;
        m_ATA = val;
    }

    public Date getATA() {

        return m_ATA;
    }

    public boolean hasATA() {

        return m_ATAPresent;
    }

    public void setAirDraught(double val) {

        m_airDraughtPresent = true;
        m_airDraught = val;
    }

    public double getAirDraught() {

        return m_airDraught;
    }

    public boolean hasAirDraught() {

        return m_airDraughtPresent;
    }

    public void setDraught(double val) {

        m_draughtPresent = true;
        m_draught = val;
    }

    public double getDraught() {

        return m_draught;
    }

    public boolean hasDraught() {

        return m_draughtPresent;
    }

    public String toXML() {

        String xml = "<Voyage";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'hh:mm:ss.SSS");

        xml += " Id=\"" + m_id + "\"";
        xml += " SourceName=\"" + m_sourceName + "\"";
        xml += " Source=\"" + m_source + "\"";
        if ( hasCargoType() ) {
            xml += " CargoType=\"" + m_cargoType + "\"";
        }
        if ( hasDestination() ) {
            xml += " Destination=\"" + m_destination + "\"";
        }
        if ( hasETA() ) {
            xml += " ETA=\"" + df.format(m_ETA) + "\"";
        }
        if ( hasATA() ) {
            xml += " ATA=\"" + df.format(m_ATA) + "\"";
        }
        if ( hasAirDraught() ) {
            xml += " AirDraught=\"" + m_airDraught + "\"";
        }
        if ( hasDraught() ) {
            xml += " Draught=\"" + m_draught + "\"";
        }
        xml += ">\n";
        xml += "</Voyage>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "Voyage\n";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'hh:mm:ss.SSS");

        str +=  lead + "    Id = " + m_id + "\n";
        str +=  lead + "    SourceName = " + m_sourceName + "\n";
        str +=  lead + "    Source = " + m_source + "\n";
        if ( hasCargoType() ) {
            str +=  lead + "    CargoType = " + m_cargoType + "\n";
        }
        if ( hasDestination() ) {
            str +=  lead + "    Destination = " + m_destination + "\n";
        }
        if ( hasETA() ) {
            str +=  lead + "    ETA = " + df.format(m_ETA) + "\n";
        }
        if ( hasATA() ) {
            str +=  lead + "    ATA = " + df.format(m_ATA) + "\n";
        }
        if ( hasAirDraught() ) {
            str +=  lead + "    AirDraught = " + m_airDraught + "\n";
        }
        if ( hasDraught() ) {
            str +=  lead + "    Draught = " + m_draught + "\n";
        }
        return str;
    }

}
