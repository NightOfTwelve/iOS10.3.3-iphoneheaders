/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/PlugIns/HealthShareExtension.appex/HealthShareExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKNavigationController.h>

@class HKLoadingShareViewController, NSMutableArray, HKDocumentPickerViewController;

@interface HKShareExtensionViewController : HKNavigationController {

	HKLoadingShareViewController* _loadingShareViewController;
	NSMutableArray* _documentsForPreview;
	int _providerLoadingCount;
	int _incomingDocumentCount;
	int _passwordProtectedZipCount;
	HKDocumentPickerViewController* _documentPickerController;

}

@property (nonatomic,retain) HKLoadingShareViewController * loadingShareViewController;              //@synthesize loadingShareViewController=_loadingShareViewController - In the implementation block
@property (nonatomic,retain) NSMutableArray * documentsForPreview;                                   //@synthesize documentsForPreview=_documentsForPreview - In the implementation block
@property (assign,nonatomic) int providerLoadingCount;                                               //@synthesize providerLoadingCount=_providerLoadingCount - In the implementation block
@property (assign,nonatomic) int incomingDocumentCount;                                              //@synthesize incomingDocumentCount=_incomingDocumentCount - In the implementation block
@property (assign,nonatomic) int passwordProtectedZipCount;                                          //@synthesize passwordProtectedZipCount=_passwordProtectedZipCount - In the implementation block
@property (nonatomic,retain) HKDocumentPickerViewController * documentPickerController;              //@synthesize documentPickerController=_documentPickerController - In the implementation block
-(void)_importAlertWithMessage:(id)arg1 doneHandler:(/*^block*/id)arg2 ;
-(void)_fetchShareData;
-(void)_shareProviderLoading;
-(void)_extractZipContent:(id)arg1 ;
-(void)_logError:(id)arg1 message:(id)arg2 ;
-(void)_shareProviderFinished;
-(void)_prepareXMLData:(id)arg1 ;
-(void)_passwordProtectedZip;
-(char)_preflightForCDA:(id)arg1 ;
-(void)_incomingDocument;
-(void)_addDocumentForPreview:(id)arg1 ;
-(void)_postDocumentPreview;
-(void)_dismissShareExtension;
-(void)_saveDocumentsAction:(id)arg1 ;
-(void)_allShareProvidersFinished;
-(HKLoadingShareViewController *)loadingShareViewController;
-(void)setLoadingShareViewController:(HKLoadingShareViewController *)arg1 ;
-(NSMutableArray *)documentsForPreview;
-(void)setDocumentsForPreview:(NSMutableArray *)arg1 ;
-(int)providerLoadingCount;
-(void)setProviderLoadingCount:(int)arg1 ;
-(int)incomingDocumentCount;
-(void)setIncomingDocumentCount:(int)arg1 ;
-(int)passwordProtectedZipCount;
-(void)setPasswordProtectedZipCount:(int)arg1 ;
-(HKDocumentPickerViewController *)documentPickerController;
-(void)setDocumentPickerController:(HKDocumentPickerViewController *)arg1 ;
-(void)viewDidLoad;
-(char)_containsPasswordProtectedData:(id)arg1 ;
-(id)_extractFirstOccurrenceOfTagRule:(id)arg1 extactor:(id)arg2 ;
@end

