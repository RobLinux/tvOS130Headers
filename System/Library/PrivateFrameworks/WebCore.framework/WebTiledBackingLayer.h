/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface WebTiledBackingLayer : CALayer {

	unique_ptr<WebCore::TileController, std::__1::default_delete<WebCore::TileController> >* _tileController;

}
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)setOpaque:(BOOL)arg1 ;
-(BOOL)isOpaque;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(double)contentsScale;
-(BOOL)drawsAsynchronously;
-(void)setNeedsDisplay;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setBorderColor:(CGColorRef)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)setDrawsAsynchronously:(BOOL)arg1 ;
-(TileController*)createTileController:(PlatformCALayer*)arg1 ;
-(void)setWantsDeepColorBackingStore:(BOOL)arg1 ;
-(void)setSupportsSubpixelAntialiasedText:(BOOL)arg1 ;
-(TiledBacking*)tiledBacking;
-(BOOL)wantsDeepColorBackingStore;
-(BOOL)supportsSubpixelAntialiasedText;
@end

