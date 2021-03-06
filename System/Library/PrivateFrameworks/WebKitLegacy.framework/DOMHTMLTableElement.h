/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMHTMLTableCaptionElement, DOMHTMLTableSectionElement, DOMHTMLCollection, NSString;

@interface DOMHTMLTableElement : DOMHTMLElement

@property (retain) DOMHTMLTableCaptionElement * caption; 
@property (retain) DOMHTMLTableSectionElement * tHead; 
@property (retain) DOMHTMLTableSectionElement * tFoot; 
@property (readonly) DOMHTMLCollection * rows; 
@property (readonly) DOMHTMLCollection * tBodies; 
@property (copy) NSString * align; 
@property (copy) NSString * bgColor; 
@property (copy) NSString * border; 
@property (copy) NSString * cellPadding; 
@property (copy) NSString * cellSpacing; 
@property (copy) NSString * frameBorders; 
@property (copy) NSString * rules; 
@property (copy) NSString * summary; 
@property (copy) NSString * width; 
-(NSString *)width;
-(void)setWidth:(NSString *)arg1 ;
-(id)insertRow:(int)arg1 ;
-(DOMHTMLCollection *)rows;
-(DOMHTMLTableCaptionElement *)caption;
-(NSString *)summary;
-(void)setCaption:(DOMHTMLTableCaptionElement *)arg1 ;
-(NSString *)border;
-(void)setBorder:(NSString *)arg1 ;
-(NSString *)rules;
-(NSString *)align;
-(void)setAlign:(NSString *)arg1 ;
-(NSString *)bgColor;
-(void)setBgColor:(NSString *)arg1 ;
-(DOMHTMLTableSectionElement *)tHead;
-(void)setTHead:(DOMHTMLTableSectionElement *)arg1 ;
-(DOMHTMLTableSectionElement *)tFoot;
-(void)setTFoot:(DOMHTMLTableSectionElement *)arg1 ;
-(DOMHTMLCollection *)tBodies;
-(NSString *)cellPadding;
-(void)setCellPadding:(NSString *)arg1 ;
-(NSString *)cellSpacing;
-(void)setCellSpacing:(NSString *)arg1 ;
-(NSString *)frameBorders;
-(void)setFrameBorders:(NSString *)arg1 ;
-(void)setRules:(NSString *)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
-(id)createTHead;
-(void)deleteTHead;
-(id)createTFoot;
-(void)deleteTFoot;
-(id)createTBody;
-(id)createCaption;
-(void)deleteCaption;
-(void)deleteRow:(int)arg1 ;
-(int)structuralComplexityContribution;
@end

