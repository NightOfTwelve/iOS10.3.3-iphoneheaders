/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceResponse.h>

@interface FBSUIApplicationLaunchResponse : FBSWorkspaceResponse {

	char _supportsTaskSuspension;
	char _supportsTaskSuspensionOnLock;

}

@property (assign,nonatomic) char supportsTaskSuspension;                    //@synthesize supportsTaskSuspension=_supportsTaskSuspension - In the implementation block
@property (assign,nonatomic) char supportsTaskSuspensionOnLock;              //@synthesize supportsTaskSuspensionOnLock=_supportsTaskSuspensionOnLock - In the implementation block
-(void)setSupportsTaskSuspension:(char)arg1 ;
-(void)setSupportsTaskSuspensionOnLock:(char)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(char)supportsTaskSuspension;
-(char)supportsTaskSuspensionOnLock;
@end
