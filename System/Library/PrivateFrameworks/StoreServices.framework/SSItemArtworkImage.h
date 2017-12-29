/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSURL;

@interface SSItemArtworkImage : NSObject <SSXPCCoding, NSCopying> {

	NSMutableDictionary* _dictionary;
	NSString* _imageKind;

}

@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,copy) NSString * imageKind;                                   //@synthesize imageKind=_imageKind - In the implementation block
@property (nonatomic,retain) NSURL * URL; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,readonly) int height; 
@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int imageOrientation; 
@property (nonatomic,readonly) float imageScale; 
@property (getter=isPrerendered,nonatomic,readonly) char prerendered; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImageKind:(NSString *)arg1 ;
-(void)setImageKindWithTypeName:(id)arg1 variantName:(id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)imageOrientation;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(CGSize)imageSize;
-(int)width;
-(int)height;
-(id)valueForProperty:(id)arg1 ;
-(NSString *)URLString;
-(float)imageScale;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSString *)imageKind;
-(char)isPrerendered;
-(id)initWithArtworkDictionary:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
@end
