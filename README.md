# Dragster Competition — Timing Software

**Timing software for the University dragster competition.**  
This program uses **two light gates** to measure a dragster’s run time:

- The timer **starts** when the dragster passes through the **Start** light gate  
- The timer **stops** when the dragster passes through the **Finish** light gate  
- The **most recent time** is saved to a **CSV file** for easy record keeping

> <img width="1174" height="317" alt="image" src="https://github.com/user-attachments/assets/690adc96-68b7-464d-bef6-a068ccb19316" />

---

## What’s in this repository

- **LabVIEW timing program** (used during the dragster competition)
- **Excel spreadsheet template** for tracking teams/runs and results
- **CSV output file** (created/updated by the LabVIEW program with the most recent time)

---

## What you need

- A Windows PC connected to the **light gate receiver** (via USB)
- The device must appear as a **COM port** in Windows
- **LabVIEW 2021+**

---

## Quick start (competition workflow)

1. **Set up the light gates** (Start and Finish) and align them correctly.
2. **Connect** the light gate receiver to the PC via USB.
3. Open the LabVIEW project:
   - Open **`Drag Race Project.lvproj`**
   - Then open **`Main.vi`**
4. **Select the correct COM port** in the program.
5. Click the **Run** arrow in LabVIEW.
6. Check the indicators:
   - Ensure the **Start** light gate indicator shows the gate is active/on
   - Ensure the **Finish** light gate indicator shows the gate is active/on
7. Press **Ready**.
8. Run the dragster:
   - Timing begins automatically when the **Start** gate triggers  
   - Timing ends automatically when the **Finish** gate triggers
9. The **latest run time** will be displayed and **saved to CSV**.

---

## Recording results (Excel spreadsheet)

An Excel spreadsheet template is included for logging runs and rankings.

You can record results in either of these ways:

### Option A — Manual entry
- Type the time shown in the LabVIEW program into the spreadsheet.

### Option B — “Get Data” button (import latest time)
- Press **Get Data** in the spreadsheet to pull in the most recent run time.
- This reads the value from the **CSV file** that LabVIEW updates after each run.

> Tip: If the spreadsheet can’t find the CSV, ensure it’s pointing to the correct file location.

---

## Output file (CSV)

After each run, the program writes the **most recent time** to a CSV file.  
This is designed to make it quick and reliable to transfer the latest result into the spreadsheet.

---

## Troubleshooting

### No COM port listed / wrong COM port
- Unplug and reconnect the USB device
- Check **Windows Device Manager** to confirm which COM port is assigned
- Ensure no other program is using the same COM port

### Start/Finish indicators not showing correctly
- Make sure both light gates are powered and aligned
- Confirm the dragster fully breaks the beam when passing through

### Excel “Get Data” doesn’t update
- Confirm the CSV file exists and is being updated by the timing software
- Check the spreadsheet is pointing to the correct CSV location

---

## Notes for competition day

- Do a quick **test run** to confirm both gates trigger correctly.
- Ensure the Start/Finish indicators are stable before pressing **Ready**.
- If you move folders/PCs, confirm the spreadsheet still links to the correct CSV path.

---

## Support / contact

If you need help setting this up for an event, contact the **Electronics & Software Labs** team.
