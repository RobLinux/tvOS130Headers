/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <FrontBoard/FBSceneTransform.h>

@interface FBSceneTranslationTransform : FBSceneTransform {

	CGPoint _translation;

}

@property (assign,nonatomic) CGPoint translation;              //@synthesize translation=_translation - In the implementation block
-(id)description;
-(void)setTranslation:(CGPoint)arg1 ;
-(CGPoint)translation;
-(void)_updateTransform;
-(id)initWithTranslation:(CGPoint)arg1 ;
@end
