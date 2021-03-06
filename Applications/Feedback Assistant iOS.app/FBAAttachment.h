/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAFileRequirement, NSURL, NSString;

@interface FBAAttachment : NSObject {

	FBAFileRequirement* _requirement;
	NSURL* _fileURL;
	NSString* _displayName;
	int _attachmentType;
	int _gatherState;

}

@property (nonatomic,retain) FBAFileRequirement * requirement;              //@synthesize requirement=_requirement - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                               //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) int attachmentType;                            //@synthesize attachmentType=_attachmentType - In the implementation block
@property (assign,nonatomic) int gatherState;                               //@synthesize gatherState=_gatherState - In the implementation block
-(void)setGatherState:(int)arg1 ;
-(id)initWithRequirement:(id)arg1 ;
-(int)gatherState;
-(NSString *)displayName;
-(NSURL *)fileURL;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setRequirement:(FBAFileRequirement *)arg1 ;
-(FBAFileRequirement *)requirement;
-(void)setFileURL:(NSURL *)arg1 ;
-(int)attachmentType;
-(void)setAttachmentType:(int)arg1 ;
@end

