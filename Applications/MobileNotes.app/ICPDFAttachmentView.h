/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICAttachmentView.h>
#import <MobileNotes/ICAttachmentPresenterFullscreenPDF.h>

@class NSOperation, UIActivityIndicatorView, ICSelectorDelayer, UIImage, NSString;

@interface ICPDFAttachmentView : ICAttachmentView <ICAttachmentPresenterFullscreenPDF> {

	CGPDFDocumentRef _pdf;
	CGPDFPageRef _page;
	char _rendering;
	NSOperation* _renderOperation;
	UIActivityIndicatorView* _progressView;
	ICSelectorDelayer* _startProgressSelectorDelayer;
	UIImage* _image;

}

@property (assign,nonatomic,__weak) NSOperation * renderOperation;                //@synthesize renderOperation=_renderOperation - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (retain) ICSelectorDelayer * startProgressSelectorDelayer;              //@synthesize startProgressSelectorDelayer=_startProgressSelectorDelayer - In the implementation block
@property (nonatomic,retain) UIImage * image;                                     //@synthesize image=_image - In the implementation block
@property (assign,getter=isRendering,nonatomic) char rendering;                   //@synthesize rendering=_rendering - In the implementation block
@property (nonatomic,readonly) CGPDFPageRef page; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) char isFullscreenPDF; 
+(id)renderingQueue;
-(id)initWithFrame:(CGRect)arg1 andTextAttachment:(id)arg2 forManualRendering:(char)arg3 ;
-(char)cancelRenderingIfPossible;
-(void)cleanupPDFDocument;
-(void)startImageRenderIfNeeded;
-(void)updateLayerContentsWithFade:(char)arg1 ;
-(void)setupBorderForLayer:(id)arg1 ;
-(NSOperation *)renderOperation;
-(void)setRenderOperation:(NSOperation *)arg1 ;
-(ICSelectorDelayer *)startProgressSelectorDelayer;
-(void)setStartProgressSelectorDelayer:(ICSelectorDelayer *)arg1 ;
-(void)stopProgress;
-(char)isFullscreenPDF;
-(void)startProgress;
-(void)setFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setBounds:(CGRect)arg1 ;
-(UIImage *)image;
-(id)accessibilityLabel;
-(void)setRendering:(char)arg1 ;
-(CGPDFPageRef)page;
-(void)setAttachment:(id)arg1 ;
-(char)isRendering;
-(UIActivityIndicatorView *)progressView;
-(void)setProgressView:(UIActivityIndicatorView *)arg1 ;
-(void)didChangeMedia;
-(void)didScrollOutOfVisibleRange;
-(void)didScrollIntoVisibleRange;
-(char)cancelDidScrollIntoVisibleRange;
@end

