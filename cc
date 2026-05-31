script_key=""; ---- put your key in there
getgenv().criv = {
    ['Core'] = {
        ['Version'] = 'v1.0',
        ['Target Selector'] = {
            ['Mode'] = 'Automatic',
            ['Select Key'] = 'Q'
        },
        ['Target Display'] = {
            ['Panel Enabled'] = true,
            ['Name ESP'] = true
        },
    },
    ['Silent Aim'] = {
        ['Enabled'] = true,
        ['Target Bind'] = '',
        ['Mode'] = 'FOV',
        ['Prediction'] = {
            ['X'] = 0,
            ['Y'] = 0,
            ['Z'] = 0
        },
        ['Hit Loaction'] = {
            ['Type'] = 'Closest Point',
            ['Parts'] = {"Head", "UpperTorso", "HumanoidRootPart", "LowerTorso", "LeftHand", "RightHand", "LeftLowerArm", "RightLowerArm", "LeftUpperArm", "RightUpperArm", "LeftFoot", "LeftLowerLeg",  "LeftUpperLeg", "RightLowerLeg", "RightFoot",  "RightUpperLeg"}
        },
        ['Checks'] = {
            'Wall', 'Knocked', 'Grabbed', 'Vehicle'
        },
        ['Fov'] = {
            ['Size'] = {
                ['X'] = 45,
                ['Y'] = 45,
                ['Z'] = 45
            }
        }
    },
    ['Camera Aimbot'] = {
        ['Enabled'] = false,
        ['Smoothness'] = 0.123,
        ['Bind'] = 'Q',
        ['Prediction'] = {
            ['X'] = 0,
            ['Y'] = 0,
            ['Z'] = 0
        },
        ['Hit Loaction'] = {
            ['Type'] = 'Closest Point',
            ['Parts'] = {"Head", "UpperTorso", "HumanoidRootPart", "LowerTorso", "LeftHand", "RightHand", "LeftLowerArm", "RightLowerArm", "LeftUpperArm", "RightUpperArm", "LeftFoot", "LeftLowerLeg",  "LeftUpperLeg", "RightLowerLeg", "RightFoot",  "RightUpperLeg"}
        },
        ['Fov'] = {
            ['Size'] = {
                ['X'] = 25,
                ['Y'] = 25,
                ['Z'] = 25
            }
        },
    },
    ['Trigger Bot'] = {
        ['Enabled'] = false,
        ['Mode'] = 'Target',
        ['Delay'] = 0,
        ['Prediction'] = {
            ['X'] = 0,
            ['Y'] = 0,
            ['Z'] = 0,
        },
        ['Keybind'] = {
            ['Bind'] = 'T', 
            ['Keybind Mode'] = 'Toggle'
        },
        ['Fov'] = {
            ['Size'] = {
                ['X'] = 25,
                ['Y'] = 25,
                ['Z'] = 25,
            },
        },
    },
    ['Range'] = {
        ['Enabled'] = true,
        ['Silent Aim'] = 250,
        ['Camera Aimbot'] = 250,
        ['Trigger Bot'] = 250
    },
    ['Speed Modifications'] = {
        ['Options'] = {
            ['Enabled'] = true,
            ['DefaultSpeed'] = 35,
            ['ToggleMode'] = false,
            ['Keybinds'] = {
                ['ToggleMovement'] = 'V',
                ['Speed +5'] = 'M',
                ['Speed -5'] = 'N'
            }
        }
    },
    ['Rapid Fire'] = {
        ['Enabled'] = true,
        ['Toggle Key'] = "H",
        ['Delay'] = 0.12,
        ['Bypass Cooldown'] = false,
        ['All Weapons'] = false,
        ['Weapons'] = {
            '[Revolver]',
            '[Double-Barrel SG]',
            '[TacticalShotgun]',
        },
    },
    ['ESP'] = {
        ['Enabled'] = true,
        ['Team Check'] = false,
        ['Max Distance'] = 1000,
        ['Names'] = {
            ['Enabled'] = true,
            ['Color'] = {255, 255, 255},
        },
        ['Boxes'] = {
            ['Enabled'] = true,
            ['Color'] = {255, 255, 255},
        },
        ['Tracers'] = {
            ['Enabled'] = false,
            ['Origin'] = 'Bottom',
            ['Color'] = {255, 255, 255},
        },
        ['Health Bar'] = {
            ['Enabled'] = true,
        },
        ['Distance'] = {
            ['Enabled'] = false,
            ['Color'] = {200, 200, 200},
        },
    },
}
loadstring(game:HttpGet("https://api.luarmor.net/files/v4/loaders/1cf983bd1f4aac54ecaba25091bb81c0.lua"))()
