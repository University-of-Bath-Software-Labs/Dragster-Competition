
# Dragster Competition — Timing Software

**Timing software for the University dragster competition.**  
This program uses **two light gates** to measure a dragster’s run time:

- The timer **starts** when the dragster passes through the **Start** light gate  
- The timer **stops** when the dragster passes through the **Finish** light gate  
- The **most recent time** is saved to a **CSV file** for easy record keeping

> **Image here** (optional: screenshot of the LabVIEW front panel)

---

## What’s in this repository

This repo includes:

- **LabVIEW timing program** (the software used during the dragster competition)
- **Spreadsheet template (Excel)** for tracking results across multiple runs/teams
- **CSV output file** (created/updated by the LabVIEW program with the most recent time)

---

## What you need

- A PC connected to the **light gate receiver** (via USB)
- The device must appear as a **COM port** in Windows
- LabVIEW 2021+

---

## Quick start (typical competition workflow)

1. Setup the light gates accordingly
2.  **Connect** the light gate receiver to the PC (USB).
3. Open the timing program. - Ensure you open the LabVIEW Project file (Drag Race Project.lvproj), then open Main.vi
4. **Select the correct COM port**.
5. Click the **Run** arrow in LabVIEW.
6. Check the indicators:
   - Ensure the **Start** light gate indicator shows the gate is active/on
   - Ensure the **Finish** light gate indicator shows the gate is active/on
7. Press **Ready**.
8. Run the dragster:
   - Timing will begin automatically when the **Start** gate triggers  
   - Timing will end automatically when the **Finish** gate triggers
9. The **latest run time** will be displayed and **saved to CSV**.

---

## Recording results (Excel spreadsheet)

An Excel spreadsheet template is included for logging runs and rankings.

You can record results in either of these ways:

### Option A — Manual entry
- Enter the time shown in the LabVIEW program directly into the spreadsheet.

### Option B — “Get Data” button (import latest time)
- The spreadsheet can pull in the most recent run time by pressing **Get Data**.
- This reads the value from the **CSV file** that LabVIEW saves the latest result to.

---

## Output file (CSV)

After each run, the program writes the **most recent time** to a CSV file.  
This is designed to make it quick and reliable to transfer the latest result into the spreadsheet.

---

## Troubleshooting

**No COM port listed / wrong COM port**
- Unplug and reconnect the USB device
- Check Windows Device Manager to confirm which COM port is assigned

**Start/Finish indicators not showing correctly**
- Make sure both light gates are powered and aligned
- Confirm the dragster fully breaks the beam when passing through

**Excel “Get Data” doesn’t update**
- Confirm the CSV file exists and is being updated by the timing software
- Check the spreadsheet is pointing to the correct CSV location

---

## Notes for competition day

- Do a quick test pass to confirm both gates trigger correctly.
- Ensure the Start/Finish indicators are stable before pressing **Ready**.
- If you move folders/PCs, confirm the spreadsheet is still linked to the correct CSV path.

---

## Support / contact

If you need help setting this up for an event, contact the **Electronics & Software Labs** team.

---
