/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBFolder, NSString;

@interface SBIconPreviousLocationInfo : NSObject {

	SBFolder* _folder;
	NSString* _folderName;

}

@property (assign,nonatomic,__weak) SBFolder * folder;              //@synthesize folder=_folder - In the implementation block
@property (nonatomic,copy) NSString * folderName;                   //@synthesize folderName=_folderName - In the implementation block
-(SBFolder *)folder;
-(void)setFolder:(SBFolder *)arg1 ;
-(NSString *)folderName;
-(void)setFolderName:(NSString *)arg1 ;
@end

