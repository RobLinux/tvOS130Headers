/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MPAction.h>

@class NSString;

@interface MPActionTrigger : MPAction {

	NSString* _actionKey;

}

@property (nonatomic,copy) NSString * actionKey;              //@synthesize actionKey=_actionKey - In the implementation block
+(id)actionTrigger;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setAction:(id)arg1 ;
-(NSString *)actionKey;
-(void)setActionKey:(NSString *)arg1 ;
@end

