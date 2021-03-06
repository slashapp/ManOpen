/* PrefPanelController.h created by lindberg on Fri 08-Oct-1999 */

#import "SystemType.h"
#import <AppKit/NSWindowController.h>

@class NSMutableArray;
@class NSFont, NSColor;
@class NSArrayController;
@class NSTableView, NSTextField, NSPopUpButton, NSMatrix;

@interface PrefPanelController : NSWindowController
{
    NSMutableArray *manPathArray;
    IBOutlet NSArrayController *manPathController;
    IBOutlet NSTableView *manPathTableView;
    IBOutlet NSTextField *fontField;
    IBOutlet NSMatrix *generalSwitchMatrix;
    IBOutlet NSPopUpButton *appPopup;
}

+ (id)sharedInstance;
+ (void)registerManDefaults;

- (IBAction)openFontPanel:(id)sender;

@end

@interface PrefPanelController (ManPath)
- (IBAction)addPathFromPanel:(id)sender;
@end
@interface PrefPanelController (DefaultManApp)
- (IBAction)chooseNewApp:(id)sender;
@end
