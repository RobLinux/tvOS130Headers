/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTTestRecipe.h>

@interface PTDoubleTestRecipe : PTTestRecipe {

	/*^block*/id _increaseAction;
	/*^block*/id _decreaseAction;

}

@property (nonatomic,copy) id increaseAction;              //@synthesize increaseAction=_increaseAction - In the implementation block
@property (nonatomic,copy) id decreaseAction;              //@synthesize decreaseAction=_decreaseAction - In the implementation block
+(id)recipeWithTitle:(id)arg1 prepareBlock:(/*^block*/id)arg2 increaseAction:(/*^block*/id)arg3 decreaseAction:(/*^block*/id)arg4 cleanupBlock:(/*^block*/id)arg5 ;
+(id)recipeWithTitle:(id)arg1 increaseAction:(/*^block*/id)arg2 decreaseAction:(/*^block*/id)arg3 ;
-(void)invalidate;
-(void)_handleEvent:(long long)arg1 ;
-(BOOL)_wantsEvent:(long long)arg1 ;
-(void)setIncreaseAction:(id)arg1 ;
-(void)setDecreaseAction:(id)arg1 ;
-(id)increaseAction;
-(id)decreaseAction;
@end
