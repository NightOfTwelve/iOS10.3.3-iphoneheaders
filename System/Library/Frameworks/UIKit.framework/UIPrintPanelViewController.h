/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPrinterBrowserOwner.h>

@class UIPrintInteractionController, UINavigationController, UIPrintPanelTableViewController, UIViewController, UIPopoverController, UIWindow, PKPrinter, NSArray, UIPrintPaper, NSString;

@interface UIPrintPanelViewController : NSObject <UIPrinterBrowserOwner> {

	UIPrintInteractionController* _printInteractionController;
	int _lastUsedPrinterIndex;
	UINavigationController* _navigationController;
	UIPrintPanelTableViewController* _tableViewController;
	UIViewController* _parentController;
	UIPopoverController* _poverController;
	UIWindow* _window;
	PKPrinter* _printer;
	char _dismissed;
	char _animated;
	char _observingRotation;
	char _canShowColor;
	/*^block*/id _previewCompletionHandler;
	char _contentLargerThanRollPaper;
	NSArray* _lastUsedPrinterArray;

}

@property (nonatomic,retain) PKPrinter * printer;                            //@synthesize printer=_printer - In the implementation block
@property (nonatomic,readonly) int pageCount; 
@property (nonatomic,retain) NSArray * pageRanges; 
@property (assign,nonatomic) char duplex; 
@property (assign,nonatomic) char grayscale; 
@property (assign,nonatomic) char staple; 
@property (assign,nonatomic) char punch; 
@property (nonatomic,readonly) NSArray * paperList; 
@property (nonatomic,retain) UIPrintPaper * paper; 
@property (assign,nonatomic) int copies; 
@property (assign,nonatomic) char scaleUpDocument; 
@property (assign,nonatomic) char annotationsImaged; 
@property (nonatomic,retain) NSString * jobAccountID; 
@property (nonatomic,readonly) char showDuplex; 
@property (nonatomic,readonly) char showColor; 
@property (nonatomic,readonly) char showPageRange; 
@property (nonatomic,readonly) char showCopies; 
@property (nonatomic,readonly) char showPaper; 
@property (nonatomic,readonly) char showPaperSelection; 
@property (nonatomic,readonly) char showPrinterWarning; 
@property (nonatomic,readonly) char showPreview; 
@property (nonatomic,readonly) char showMoreOptions; 
@property (nonatomic,readonly) char showStaple; 
@property (nonatomic,readonly) char showPunch; 
@property (nonatomic,readonly) char showScaleUp; 
@property (nonatomic,readonly) char contentLargerThanRollPaper;              //@synthesize contentLargerThanRollPaper=_contentLargerThanRollPaper - In the implementation block
@property (nonatomic,readonly) char showJobAccountID; 
@property (nonatomic,readonly) char isJobAccountIDRequired; 
@property (nonatomic,readonly) char hasJobAccountID; 
@property (nonatomic,readonly) char showAnnotationSwitch; 
@property (retain) NSArray * lastUsedPrinterArray;                           //@synthesize lastUsedPrinterArray=_lastUsedPrinterArray - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)printerBrowserViewDidDisappear;
-(void)_presentWindow;
-(void)_keyWindowWillRotate:(id)arg1 ;
-(void)_presentInParentAnimated:(char)arg1 ;
-(void)dismissAnimated:(char)arg1 ;
-(char)filtersPrinters;
-(void)cancelPrinting;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(int)pageCount;
-(char)showPageRange;
-(NSArray *)pageRanges;
-(void)setPageRanges:(NSArray *)arg1 ;
-(char)duplex;
-(void)setDuplex:(char)arg1 ;
-(int)copies;
-(void)setCopies:(int)arg1 ;
-(char)staple;
-(void)setStaple:(char)arg1 ;
-(char)punch;
-(void)setPunch:(char)arg1 ;
-(NSString *)jobAccountID;
-(void)setJobAccountID:(NSString *)arg1 ;
-(void)lookupLastUsedPrinter;
-(void)printPanelDidDisappear;
-(void)printPaperViewDidDisappear;
-(void)printRangeViewDidDisappear;
-(void)printMoreOptionsViewDidDisappear;
-(UIPrintPaper *)paper;
-(char)showPreview;
-(void)presentPrintPanelAnimated:(char)arg1 ;
-(void)dismissPrintPanel:(char)arg1 animated:(char)arg2 ;
-(char)scaleUpDocument;
-(char)contentLargerThanRollPaper;
-(id)_removeRollsFrom:(id)arg1 ;
-(void)setPaper:(UIPrintPaper *)arg1 ;
-(NSArray *)paperList;
-(char)showPaper;
-(char)showScaleUp;
-(char)showStaple;
-(char)testIfContentLargerThanRollPaper:(id)arg1 ;
-(NSArray *)lastUsedPrinterArray;
-(void)setLastUsedPrinterArray:(NSArray *)arg1 ;
-(id)initWithPrintInterationController:(id)arg1 inParentController:(id)arg2 ;
-(void)presentPrintPanelFromRect:(CGRect)arg1 inView:(id)arg2 animated:(char)arg3 ;
-(void)presentPrintPanelFromBarButtonItem:(id)arg1 animated:(char)arg2 ;
-(void)startPrinting;
-(char)grayscale;
-(void)setGrayscale:(char)arg1 ;
-(void)setScaleUpDocument:(char)arg1 ;
-(char)annotationsImaged;
-(void)setAnnotationsImaged:(char)arg1 ;
-(char)hasJobAccountID;
-(char)showDuplex;
-(char)showColor;
-(char)showCopies;
-(char)showPrinterWarning;
-(char)showPaperSelection;
-(char)showMoreOptions;
-(char)showPunch;
-(char)showJobAccountID;
-(char)showAnnotationSwitch;
-(char)isJobAccountIDRequired;
-(id)localizedPageRangeText;
@end
