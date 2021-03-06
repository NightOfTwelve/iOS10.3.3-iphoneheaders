/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface CABehavior : NSObject <NSCoding, NSCopying> {

	void* _attr;
	unsigned _refcount;
	unsigned _uid;

}

@property (getter=isEnabled) char enabled; 
@property (copy) NSString * name; 
@property (__weak) id<CABehaviorDelegate> delegate; 
@property (copy) NSDictionary * style; 
+(char)resolveInstanceMethod:(SEL)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(/*function pointer*/void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
+(id)behavior;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(char)shouldArchiveValueForKey:(id)arg1 ;
-(void)_setCARenderBehavior:(Behavior*)arg1 ;
-(id)init;
-(oneway void)release;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CABehaviorDelegate>)arg1 ;
-(void)dealloc;
-(id)retain;
-(unsigned)retainCount;
-(id)debugDescription;
-(id<CABehaviorDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(NSDictionary *)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(char)allowsWeakReference;
-(void)setStyle:(NSDictionary *)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(char)retainWeakReference;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

