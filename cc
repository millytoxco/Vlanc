script_key=""; ---- put your key in there

getgenv().criv = {
    ['Core'] = {
        ['Version'] = 'v1.0',
        ['Target Selector'] = {
            ['Target Mode'] = 'Manual',
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
            ['Show Fov'] = false, -- true = show FOV circle, false = hide
            ['Size'] = {
                ['X'] = 450,
                ['Y'] = 450,
                ['Z'] = 450
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
            ['Show Fov'] = false, -- true = show FOV circle, false = hide
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
            ['Show Fov'] = false, -- true = show FOV circle, false = hide
            ['Size'] = {
                ['X'] = 25,
                ['Y'] = 25,
                ['Z'] = 25,
            },
        },
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
            },
            ['Jump Boost'] = {
                ['Enabled'] = true,
                ['Default'] = 50,
                ['Keybinds'] = {
                    ['Jump +5'] = 'J',
                    ['Jump -5'] = 'K'
                }
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
    ['Spread Modification'] = {
        ['Enabled'] = true,
        ['Guns'] = {
            ['[Double-Barrel SG]'] = 0,
            ['[TacticalShotgun]'] = 0,
        },
    },
    ['ESP'] = {
        ['Enabled'] = true,
        ['Team Check'] = false,
        ['Max Distance'] = 1000,
        ['Names'] = {
            ['Enabled'] = true,
        },
        ['Boxes'] = {
            ['Enabled'] = true,
        },
        ['Tracers'] = {
            ['Enabled'] = false,
            ['Origin'] = 'Bottom',
        },
        ['Health Bar'] = {
            ['Enabled'] = true,
        },
        ['Distance'] = {
            ['Enabled'] = false,
        },
    },
    ['Hitbox Expander'] = {
        ['Enabled'] = true,
        ['Size'] = {
            ['X'] = 5,
            ['Y'] = 5,
            ['Z'] = 5,
        },
    },
    ['Skin Changer'] = {
        ['Enabled'] = false,
        ['Skins'] = {
            ['[Double-Barrel SG]'] = 'Galaxy',
            ['[Revolver]'] = 'Galaxy',
            ['[TacticalShotgun]'] = 'Galaxy',
            ['[Knife]'] = 'GPO-Knife',
        },
    },
}


loadstring(game:HttpGet("https://api.luarmor.net/files/v4/loaders/1cf983bd1f4aac54ecaba25091bb81c0.lua"))()
