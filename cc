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
        },
    },
    ['Target Line'] = {
        ['Enabled'] = true,
        ['Color'] = {255, 255, 255},
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
        ['Aim At'] = 'Head',
        ['Checks'] = {
            'Wall', 'Knocked', 'Grabbed', 'Vehicle'
        },
        ['Fov'] = {
            ['Show Fov'] = false, -- true = show FOV circle, false = hide
            ['Size'] = {
                ['X'] = 45,
                ['Y'] = 45,
                ['Z'] = 45
            }
        }
    },
    ['Camera Aimbot'] = {
        ['Enabled'] = false,
        ['Bind'] = 'C',
        ['Distance'] = 450,
        ['Smoothness'] = 0.159,
        ['Easing'] = {
            ['Style'] = 'Sine',
            ['Direction'] = 'InOut',
        },
        ['Hit Part'] = 'Head',
        ['Closest Point'] = {
            ['Mode'] = 'Regular',
            ['Scale'] = 1,
        },
        ['Prediction'] = {
            ['X'] = 0,
            ['Y'] = 0,
            ['Z'] = 0,
            ['Clamp Y Axis'] = {
                ['Override'] = 'Full', -- Full, Partial, None
            },
        },
        ['Sticky Aim'] = true,
        ['Checks'] = {'Wall', 'Knocked', 'Grabbed', 'Vehicle'},
        ['Fov'] = {
            ['Show Fov'] = false,
            ['Size'] = {
                ['X'] = 25,
                ['Y'] = 25,
                ['Z'] = 25
            }
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
        ['Delay'] = 0.000000001,
        ['Bypass Cooldown'] = true,
        ['All Weapons'] = true,
        ['Weapons'] = {
            '[Revolver]',
            '[Double-Barrel SG]',
            '[TacticalShotgun]',
        },
    },
    ['Auto Buy Armor'] = {
        ['Enabled'] = true,
        ['Bind'] = 'B',
    },
    ['Auto Buy Stim'] = {
        ['Enabled'] = true,
        ['Bind'] = 'G',
    },
    ['Spread Modification'] = {
        ['Enabled'] = true,
        ['Guns'] = {
            ['[Double-Barrel SG]'] = 0,
            ['[TacticalShotgun]'] = 0,
        },
    },
    ['ESP'] = {
        ['Enabled'] = false,
        ['Color'] = {255, 255, 255}, -- RGB table, or hex like "#00FFAA"
        ['Name ESP'] = {
            ['Enabled'] = true,
        },
        ['Team Check'] = false,
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
        ['Enabled'] = false,
        ['Size'] = 7,
        ['Link'] = false, -- true = only expand hitbox on your current target
    },
    ['Range Extender'] = {
        ['Enabled'] = false,
        ['Ignore Walls'] = true,
        ['Distance'] = 0, -- studs; 0 = no distance cap on targeting
        ['Off Screen'] = true,
        ['All Weapons'] = true,
        ['Silent Aim'] = true,
        ['Camera Aimbot'] = true,
    },
    ['Wallbang'] = {
        ['Enabled'] = false
    },
    ['Trigger Bot'] = {
        ['Enabled'] = false,
        ['Max Range'] = 500,
        ['Bind'] = 'T',
        ['Mode'] = {
            ['Type'] = 'Keybind',
            ['Keybind Mode'] = 'Always', -- Always, Hold, Toggle
            ['Mouse Button'] = 'MouseButton2',
        },
        ['Settings'] = {
            ['Type'] = 'Hitbox', -- Hitbox or Raycast
        },
        ['Delay Settings'] = {
            ['Delay Toggle'] = true,
            ['Delay'] = 0,
        },
        ['Hitbox'] = {
            ['Show Hitbox'] = false,
            ['Size'] = {
                ['X Left'] = 4,
                ['X Right'] = 4,
                ['Y Upper'] = 4,
                ['Y Lower'] = 4,
                ['Z Left'] = 4,
                ['Z Right'] = 4,
            },
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
