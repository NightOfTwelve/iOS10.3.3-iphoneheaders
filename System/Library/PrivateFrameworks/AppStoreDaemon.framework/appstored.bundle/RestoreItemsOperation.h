/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:17 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSAccount, NSArray, NSMutableArray;

@interface RestoreItemsOperation : ISOperation {

	SSAccount* _account;
	NSArray* _restoreItems;
	NSMutableArray* _responses;
	char _shouldShowTermsAndConditionsDialog;

}

@property (readonly) SSAccount * account; 
@property (assign) id<RestoreItemsOperationDelegate> delegate; 
@property (assign) char shouldShowTermsAndConditionsDialog; 
@property (readonly) NSArray * responses; 
@property (readonly) NSArray * restoreItems; 
-(id)initWithRestoreItems:(id)arg1 account:(id)arg2 ;
-(void)setShouldShowTermsAndConditionsDialog:(char)arg1 ;
-(id)_runWithItems:(id)arg1 options:(id)arg2 ;
-(void)_addResponse:(id)arg1 ;
-(id)_newResponseWithItems:(id)arg1 error:(id)arg2 ;
-(char)_runWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)_showDialogsForResponse:(id)arg1 ;
-(id)_plistDataWithItems:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_runWithBodyData:(id)arg1 contentEncoding:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(char)_requestItems:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(char)shouldShowTermsAndConditionsDialog;
-(NSArray *)restoreItems;
-(void)_run;
-(void)run;
-(NSArray *)responses;
-(SSAccount *)account;
@end

