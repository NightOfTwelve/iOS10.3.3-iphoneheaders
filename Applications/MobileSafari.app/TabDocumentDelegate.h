/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TabDocumentDelegate
@required
-(void)closeTabDocument:(id)arg1 animated:(char)arg2;
-(void)removeAppBannerFromTabDocument:(id)arg1 animated:(char)arg2;
-(void)hideAlertForTabDocument:(id)arg1;
-(void)tabDocumentDidUpdateShowingContinuous:(id)arg1;
-(void)tabDocumentDidUpdatePersistentState:(id)arg1;
-(void)tabDocumentDidStartLoading:(id)arg1;
-(void)tabDocumentWillStartLoadFromUserClick:(id)arg1;
-(char)tabDocumentCanDownloadFile:(id)arg1;
-(char)tabDocumentCanRedirectToExternalApplication:(id)arg1;
-(void)tabDocumentDidCancelRedirectToExternalApplication:(id)arg1;
-(void)tabDocument:(id)arg1 didFinishLoadingWithError:(char)arg2;
-(void)tabDocumentDidChangeLocationWithinPageForMainFrame:(id)arg1;
-(void)tabDocumentDidUpdateTitle:(id)arg1;
-(void)tabDocumentDidUpdateBackForward:(id)arg1;
-(void)tabDocument:(id)arg1 progressChanged:(float)arg2;
-(void)tabDocumentStartedLoadingResource:(id)arg1;
-(void)tabDocumentFluidProgressRocketAnimationDidComplete:(id)arg1;
-(void)tabDocumentStoppedLoadingResource:(id)arg1;
-(char)tabDocument:(id)arg1 shouldHandleAuthenticationChallenge:(id)arg2;
-(char)tabDocumentShouldHandleCertificateError:(id)arg1;
-(char)tabDocumentCanShowJavaScriptAlertConfirmOrTextInput:(id)arg1;
-(void)showAlertForTabDocument:(id)arg1;
-(void)tabDocument:(id)arg1 didDismissDialog:(id)arg2;
-(void)tabDocument:(id)arg1 didDetectReaderAvailability:(char)arg2;
-(void)tabDocument:(id)arg1 didCreateNewTabDocument:(id)arg2;
-(char)tabDocumentShouldBlockPopUp:(id)arg1;
-(void)tabDocument:(id)arg1 didCreatePreviewDocument:(id)arg2;
-(void)tabDocumentCommitPreviewedDocument:(id)arg1;
-(void)tabDocumentCommitPreviewedDocumentAsNewTab:(id)arg1 inBackground:(char)arg2;
-(void)tabDocumentDidDimissPreviewedDocument:(id)arg1;
-(char)tabDocumentCanDisplayModalUI:(id)arg1;
-(char)tabDocumentSupportsOpenInNewWindow:(id)arg1;
-(char)tabDocumentCanBecomeCurrentUserActivity:(id)arg1;
-(char)tabDocumentDidBecomeActiveDueToWindowArrangementChanges:(id)arg1;
-(id)blankTabTitleForTabDocument:(id)arg1;
-(void)composeEmailWithMailToURL:(id)arg1 forTabDocument:(id)arg2;
-(void)tabDocumentDidCompleteCheckForAppBanner:(id)arg1;
-(void)setAppBannerPinnedToTop:(char)arg1 forTabDocument:(id)arg2;
-(void)tabDocumentDidBeginNavigationGesture:(id)arg1;
-(void)tabDocumentWillEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2;
-(void)tabDocumentDidEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2;
-(void)tabDocument:(id)arg1 presentViewControllerAnimated:(id)arg2;
-(void)tabDocument:(id)arg1 dismissViewControllerAnimated:(id)arg2;
-(int)tabDocumentOrderIndex:(id)arg1;
-(id)tabDocumentSavedSessionStateData:(id)arg1;
-(char)tabDocumentCanCloseWindow:(id)arg1;

@end

