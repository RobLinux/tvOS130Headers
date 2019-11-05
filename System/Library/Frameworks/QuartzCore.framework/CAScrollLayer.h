/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CAScrollLayer : CALayer

@property (copy) NSString * scrollMode; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(void)scrollToPoint:(CGPoint)arg1 ;
-(void)scrollToRect:(CGRect)arg1 ;
-(void)_scrollPoint:(CGPoint)arg1 fromLayer:(id)arg2 ;
-(void)_scrollRect:(CGRect)arg1 fromLayer:(id)arg2 ;
-(CGRect)_visibleRectOfLayer:(id)arg1 ;
-(NSString *)scrollMode;
-(void)setScrollMode:(NSString *)arg1 ;
@end

