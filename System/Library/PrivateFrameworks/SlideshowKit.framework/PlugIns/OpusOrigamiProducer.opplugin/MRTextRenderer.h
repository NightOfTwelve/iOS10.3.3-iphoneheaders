/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:41 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class NSAttributedString;

@interface MRTextRenderer : NSObject {

	NSAttributedString* _text;
	NSAttributedString* _cachedText;
	NSAttributedString* _placeholderText;
	CGSize _definedSize;
	CGSize _resolution;
	int _maxNumberOfLines;
	int _lastGlyphIndex;
	char _truncate;
	char _renderAtDefinedSize;
	float _lineSpacingFactor;
	CGSize _inset;
	float _scale;
	int _columnCount;
	float _columnMargin;
	float _extraFooter;
	char _centerVertically;
	CGSize _cachedSize;
	CGSize _originalCacheSize;
	CGRect _imageRect;

}

@property (assign,nonatomic) NSAttributedString * text;                         //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) NSAttributedString * placeholderText;              //@synthesize placeholderText=_placeholderText - In the implementation block
@property (assign,nonatomic) CGSize resolution;                                 //@synthesize resolution=_resolution - In the implementation block
@property (assign,nonatomic) char truncate;                                     //@synthesize truncate=_truncate - In the implementation block
@property (assign,nonatomic) CGSize definedSize;                                //@synthesize definedSize=_definedSize - In the implementation block
@property (assign,nonatomic) char renderAtDefinedSize;                          //@synthesize renderAtDefinedSize=_renderAtDefinedSize - In the implementation block
@property (assign,nonatomic) int maxNumberOfLines;                              //@synthesize maxNumberOfLines=_maxNumberOfLines - In the implementation block
@property (assign,nonatomic) float lineSpacingFactor;                           //@synthesize lineSpacingFactor=_lineSpacingFactor - In the implementation block
@property (assign,nonatomic) CGSize inset;                                      //@synthesize inset=_inset - In the implementation block
@property (assign,nonatomic) float scale;                                       //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) int columnCount;                                   //@synthesize columnCount=_columnCount - In the implementation block
@property (assign,nonatomic) float columnMargin;                                //@synthesize columnMargin=_columnMargin - In the implementation block
@property (assign,nonatomic) float extraFooter;                                 //@synthesize extraFooter=_extraFooter - In the implementation block
@property (assign,nonatomic) char centerVertically;                             //@synthesize centerVertically=_centerVertically - In the implementation block
@property (assign,nonatomic) CGRect imageRect;                                  //@synthesize imageRect=_imageRect - In the implementation block
-(id)initWithText:(id)arg1 resolution:(CGSize)arg2 ;
-(CGContextRef)retainedContext;
-(int)glyphIndexForStringIndex:(int)arg1 ;
-(void)updateLineSpacing;
-(CGSize)_sizeToRendererAt;
-(id)_truncateTextToFitInSize:(CGSize)arg1 fromCenter:(char)arg2 outSize:(CGSize*)arg3 ;
-(CGContextRef)_retainedContextFromAttributedString:(id)arg1 withSize:(CGSize)arg2 ;
-(CGSize)_sizeOfString:(id)arg1 ;
-(CGRect)tightFrameOfLineAtIndex:(int)arg1 ;
-(CGRect)_tightFrameOfLineAtIndex:(int)arg1 inString:(id)arg2 withSize:(CGSize)arg3 ;
-(void)_drawInContext:(CGContextRef)arg1 withAttributedString:(id)arg2 withSize:(CGSize)arg3 andScale:(float)arg4 ;
-(id)_invertRect:(CGRect)arg1 inRect:(CGRect)arg2 ;
-(float)_strikethroughThinkness:(int)arg1 baselineOffset:(float)arg2 lineRect:(CGRect)arg3 ;
-(int)_numberOfLinesInString:(id)arg1 ;
-(int)_glyphIndexForStringIndex:(int)arg1 inString:(id)arg2 forSize:(CGSize)arg3 ;
-(SCD_Struct_MR20)rangeOfStringForGlyphIndex:(int)arg1 ;
-(CGSize)_shadowSizeOffsetForString:(id)arg1 ;
-(int)maxNumberOfLines;
-(void)squeezeWidthForLineCount:(int)arg1 ;
-(void)setLineSpacingFactor:(float)arg1 ;
-(CGRect)frameOfLineWithGlyphAtIndex:(int)arg1 range:(NSRange*)arg2 ;
-(id)truncatedText;
-(CGRect)_textClipRectForString:(id)arg1 ;
-(char)renderAtDefinedSize;
-(float)lineSpacingFactor;
-(CGRect)tightFrameOfAllLines;
-(void)setRenderAtDefinedSize:(char)arg1 ;
-(int)countOfGlyphs;
-(CGPoint)originOfWordAtIndex:(int)arg1 ;
-(CGSize)definedSize;
-(CGContextRef)retainedContextOfWordsInRange:(SCD_Struct_MR20)arg1 ;
-(CGSize)sizeOfText;
-(float)columnMargin;
-(void)setExtraFooter:(float)arg1 ;
-(float)extraFooter;
-(char)centerVertically;
-(void)setDefinedSize:(CGSize)arg1 ;
-(void)setMaxNumberOfLines:(int)arg1 ;
-(void)setTruncate:(char)arg1 ;
-(CGSize)sizeOfContext;
-(int)countOfWords;
-(void)cacheText;
-(SCD_Struct_MR20)rangeOfGlyphsForWordsInRange:(SCD_Struct_MR20)arg1 ;
-(int)numberOfLinesForTruncatedText;
-(SCD_Struct_MR20)rangeOfGlyphsOnLine:(int)arg1 ;
-(CGPoint)originOfGlyphAtIndex:(int)arg1 ;
-(CGContextRef)retainedContextOfGlyphAtIndex:(int)arg1 ;
-(SCD_Struct_MR20)rangeOfWordsOnLine:(int)arg1 ;
-(void)setCenterVertically:(char)arg1 ;
-(void)setColumnMargin:(float)arg1 ;
-(char)truncate;
-(id)init;
-(void)setInset:(CGSize)arg1 ;
-(void)dealloc;
-(float)_scale;
-(void)setScale:(float)arg1 ;
-(NSAttributedString *)text;
-(void)setText:(NSAttributedString *)arg1 ;
-(float)scale;
-(CGSize)shadowOffset;
-(int)numberOfLines;
-(void)cleanup;
-(void)clearCache;
-(void)trimWhitespace;
-(int)columnCount;
-(void)setColumnCount:(int)arg1 ;
-(void)setImageRect:(CGRect)arg1 ;
-(CGRect)imageRect;
-(NSAttributedString *)placeholderText;
-(void)setPlaceholderText:(NSAttributedString *)arg1 ;
-(CGSize)resolution;
-(void)setResolution:(CGSize)arg1 ;
-(CGSize)inset;
@end

