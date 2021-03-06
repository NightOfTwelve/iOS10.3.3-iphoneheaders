/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIImage;

@interface _UIDocumentPickerAuxiliaryOption : NSObject <NSSecureCoding> {

	char _newlyAdded;
	NSString* _title;
	UIImage* _image;
	NSString* _identifier;
	/*^block*/id _handler;
	unsigned _order;

}

@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id handler;                                         //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) unsigned order;                                   //@synthesize order=_order - In the implementation block
@property (assign,getter=isNewlyAdded,nonatomic) char newlyAdded;              //@synthesize newlyAdded=_newlyAdded - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(UIImage *)image;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)setOrder:(unsigned)arg1 ;
-(unsigned)order;
-(char)isNewlyAdded;
-(void)setNewlyAdded:(char)arg1 ;
@end

