/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebKitLegacy/DOMObject.h>
#import <UIKit/UIWebSelectionBlock.h>

@class NSString, WebArchive, DOMNode;

@interface DOMRange : DOMObject <UIWebSelectionBlock>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WebArchive * webArchive; 
@property (nonatomic,copy,readonly) NSString * markupString; 
@property (readonly) DOMNode * startContainer; 
@property (readonly) int startOffset; 
@property (readonly) DOMNode * endContainer; 
@property (readonly) int endOffset; 
@property (readonly) BOOL collapsed; 
@property (readonly) DOMNode * commonAncestorContainer; 
@property (copy,readonly) NSString * text; 
+(id)rangeForFirstPosition:(id)arg1 second:(id)arg2 ;
-(CGRect)boundingRect;
-(id)webFrame;
-(id)rangeOfContents;
-(BOOL)containsRange:(id)arg1 ;
-(void)unionWithRange:(id)arg1 ;
-(BOOL)selectable;
-(id)parentBlock;
-(BOOL)canShrinkDirectlyToTextOnly;
-(CGRect)boundingRectAndInsideFixedPosition:(int*)arg1 ;
-(id)enclosingDocument;
-(id)asDomRange;
-(BOOL)isSameBlock:(id)arg1 ;
-(BOOL)containsBlock:(id)arg1 ;
-(id)asDomNode;
-(BOOL)strictlyContainsBlock:(id)arg1 ;
-(id)largerParent;
-(BOOL)rendersAsBlock;
-(NSString *)description;
-(void)dealloc;
-(id)_text;
-(NSString *)text;
-(CGRect)boundingBox;
-(int)endOffset;
-(void)detach;
-(id)firstNode;
-(int)startOffset;
-(id)toString;
-(id)textRects;
-(id)lineBoxRects;
-(CGImageRef)renderedImageForcingBlackText:(BOOL)arg1 ;
-(DOMNode *)startContainer;
-(DOMNode *)endContainer;
-(BOOL)collapsed;
-(DOMNode *)commonAncestorContainer;
-(void)setStart:(id)arg1 offset:(int)arg2 ;
-(void)setEnd:(id)arg1 offset:(int)arg2 ;
-(void)setStartBefore:(id)arg1 ;
-(void)setStartAfter:(id)arg1 ;
-(void)setEndBefore:(id)arg1 ;
-(void)setEndAfter:(id)arg1 ;
-(void)collapse:(BOOL)arg1 ;
-(void)selectNode:(id)arg1 ;
-(void)selectNodeContents:(id)arg1 ;
-(short)compareBoundaryPoints:(unsigned short)arg1 sourceRange:(id)arg2 ;
-(void)deleteContents;
-(id)extractContents;
-(id)cloneContents;
-(void)insertNode:(id)arg1 ;
-(void)surroundContents:(id)arg1 ;
-(id)cloneRange;
-(id)createContextualFragment:(id)arg1 ;
-(short)compareNode:(id)arg1 ;
-(BOOL)intersectsNode:(id)arg1 ;
-(short)comparePoint:(id)arg1 offset:(int)arg2 ;
-(BOOL)isPointInRange:(id)arg1 offset:(int)arg2 ;
-(void)expand:(id)arg1 ;
-(void)setStart:(id)arg1 :(int)arg2 ;
-(void)setEnd:(id)arg1 :(int)arg2 ;
-(short)compareBoundaryPoints:(unsigned short)arg1 :(id)arg2 ;
-(void)move:(unsigned)arg1 inDirection:(int)arg2 ;
-(void)extend:(unsigned)arg1 inDirection:(int)arg2 ;
-(WebArchive *)webArchive;
-(NSString *)markupString;
-(id)startPosition;
-(id)endPosition;
-(id)enclosingWordRange;
@end

