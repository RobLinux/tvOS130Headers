/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class IKTextParser, NSMutableArray, NSAttributedString, NSArray, UIColor;

@interface IKTextElement : IKViewElement {

	IKTextParser* _textParser;
	NSMutableArray* _textBadges;
	NSMutableArray* _textBadgeElements;
	NSMutableArray* _textSpanElements;
	unsigned long long _textStyle;

}

@property (nonatomic,retain,readonly) NSAttributedString * text; 
@property (nonatomic,readonly) NSArray * badges; 
@property (nonatomic,readonly) unsigned long long textStyle;                  //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,readonly) long long maxLines; 
@property (nonatomic,readonly) unsigned long long alignment; 
@property (nonatomic,readonly) UIColor * color; 
+(BOOL)shouldParseChildDOMElements;
-(long long)tv_textStyle;
-(id)tv_attributedString;
-(id)tv_associatedViewElement;
-(id)tv_paragraphStyleForDefaultStyle:(id)arg1 withTextAlignment:(long long)arg2 ;
-(id)tv_paragraphStyleForDefaultStyle:(id)arg1 ;
-(id)tv_attributedStringWithForegroundColor:(id)arg1 textAlignment:(long long)arg2 ;
-(id)tv_textAttributes;
-(id)debugDescription;
-(unsigned long long)alignment;
-(NSAttributedString *)text;
-(UIColor *)color;
-(id)accessibilityText;
-(unsigned long long)textStyle;
-(long long)maxLines;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(void)appDocumentDidMarkStylesDirty;
-(id)initWithPrototypeElement:(id)arg1 parent:(id)arg2 appDataItem:(id)arg3 ;
-(id)initWithOriginalElement:(id)arg1 ;
-(unsigned long long)_styleForTagName:(id)arg1 ;
-(NSArray *)badges;
-(id)attributedStringWithFont:(id)arg1 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 defaultAttributes:(id*)arg2 ;
-(id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 defaultAttributes:(id*)arg4 ;
@end

