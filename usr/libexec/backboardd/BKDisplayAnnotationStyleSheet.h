/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:32 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/BKDisplayAnnotationStyle.h>

@protocol BKDisplayAnnotationStyle;
@class NSString;

@interface BKDisplayAnnotationStyleSheet : NSObject <BKDisplayAnnotationStyle> {

	id<BKDisplayAnnotationStyle> _baseStyle;
	id<BKDisplayAnnotationStyle> _styleModifier;
	id<BKDisplayAnnotationStyle> _subnodeStyleModifier;

}

@property (nonatomic,retain) id<BKDisplayAnnotationStyle> baseStyle;                         //@synthesize baseStyle=_baseStyle - In the implementation block
@property (nonatomic,retain) id<BKDisplayAnnotationStyle> styleModifier;                     //@synthesize styleModifier=_styleModifier - In the implementation block
@property (nonatomic,retain) id<BKDisplayAnnotationStyle> subnodeStyleModifier;              //@synthesize subnodeStyleModifier=_subnodeStyleModifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<BKDisplayAnnotationStyle>)baseStyle;
-(void)setBaseStyle:(id<BKDisplayAnnotationStyle>)arg1 ;
-(void)sizeLayer:(id)arg1 toFitAtScale:(double)arg2 ;
-(void)applyToLayer:(id)arg1 forContent:(id)arg2 ;
-(id<BKDisplayAnnotationStyle>)subnodeStyleModifier;
-(id)newLayerForContent:(id)arg1 scale:(double)arg2 ;
-(id<BKDisplayAnnotationStyle>)styleModifier;
-(void)setStyleModifier:(id<BKDisplayAnnotationStyle>)arg1 ;
-(void)setSubnodeStyleModifier:(id<BKDisplayAnnotationStyle>)arg1 ;
@end

