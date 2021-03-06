/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/CUIStructuredThemeStorage.h>
#import <libobjc.A.dylib/CUIStructuredThemeStorage2.h>

@class NSMutableDictionary, CUICommonAssetStorage, NSLock, NSString, NSCache;

@interface CUIStructuredThemeStore : NSObject <CUIStructuredThemeStorage, CUIStructuredThemeStorage2> {

	NSMutableDictionary* _cache;
	CUICommonAssetStorage* _store;
	NSLock* _cacheLock;
	NSLock* _storeLock;
	unsigned _themeIndex;
	NSString* _bundleID;
	NSCache* _namedRenditionKeyCache;

}

@property (assign,nonatomic) unsigned themeIndex; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)assetExistsForKey:(renditionkeytoken*)arg1 ;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 ;
-(const renditionkeyfmt*)keyFormat;
-(id)renditionNameForKeyList:(renditionkeytoken*)arg1 ;
-(unsigned)colorSpaceID;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1 ;
-(char)canGetRenditionWithKey:(const renditionkeytoken*)arg1 ;
-(id)copyKeySignatureForKey:(const renditionkeytoken*)arg1 withBytesNoCopy:(char*)arg2 length:(unsigned)arg3 ;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 usingKeySignature:(id)arg2 ;
-(void)clearRenditionCache;
-(int)maximumRenditionKeyTokenCount;
-(char)usesCUISystemThemeRenditionKey;
-(id)allImageNames;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1 cursorHotSpot:(CGPoint*)arg2 ;
-(char)canGetRenditionWithKey:(const renditionkeytoken*)arg1 isFPO:(char*)arg2 ;
-(id)zeroCodeGlyphList;
-(id)debugDescriptionForKeyList:(const renditionkeytoken*)arg1 ;
-(char)getFontName:(id*)arg1 baselineOffset:(float*)arg2 forFontType:(id)arg3 ;
-(float)fontSizeForFontSizeType:(id)arg1 ;
-(id)copyLookupKeySignatureForKey:(const renditionkeytoken*)arg1 ;
-(unsigned)distilledInCoreUIVersion;
-(char)_formatStorageKeyArrayBytes:(void*)arg1 length:(unsigned long)arg2 fromKey:(renditionkeytoken*)arg3 ;
-(void)_updateKeyWithCompatibilityMapping:(renditionkeytoken*)arg1 ;
-(id)_newRenditionKeyDataFromKey:(renditionkeytoken*)arg1 ;
-(void)_getKeyForAssetClosestToKey:(renditionkeytoken*)arg1 foundAsset:(char*)arg2 ;
-(const renditionkeyfmt*)renditionKeyFormat;
-(id)lookupAssetForKey:(renditionkeytoken*)arg1 ;
-(void)_getKeyForAssetInOtherLookGroupClosestToKey:(renditionkeytoken*)arg1 foundAsset:(char*)arg2 ;
-(char)_canGetRenditionWithKey:(const renditionkeytoken*)arg1 isFPO:(char*)arg2 lookForSubstitutions:(char)arg3 ;
-(char)getPhysicalColor:(colordef*)arg1 withName:(id)arg2 ;
-(char)hasPhysicalColorWithName:(id)arg1 ;
-(unsigned)documentFormatVersion;
-(unsigned)authoredWithSchemaVersion;
-(id)catalogGlobals;
-(id)themeStore;
-(id)baseGradationKeySignatureForKey:(const renditionkeytoken*)arg1 ;
-(id)keySignatureForKey:(const renditionkeytoken*)arg1 ;
-(id)convertRenditionKeyToKeyData:(renditionkeytoken*)arg1 ;
-(id)prefilteredAssetDataForKey:(renditionkeytoken*)arg1 ;
-(void)setThemeIndex:(unsigned)arg1 ;
-(void)dealloc;
-(NSString *)debugDescription;
-(void)_commonInit;
-(id)initWithURL:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long)arg2 ;
-(id)imagesWithName:(id)arg1 ;
-(id)bundleID;
-(unsigned)themeIndex;
@end

