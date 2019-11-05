/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <ScreenTimeCore/NSCopying.h>

@class STBlueprintScheduleSimpleItem, NSArray;

@interface STBlueprintScheduleRepresentation : NSObject <NSCopying> {

	STBlueprintScheduleSimpleItem* _simpleSchedule;
	NSArray* _customScheduleItems;

}

@property (nonatomic,retain) STBlueprintScheduleSimpleItem * simpleSchedule;              //@synthesize simpleSchedule=_simpleSchedule - In the implementation block
@property (nonatomic,copy) NSArray * customScheduleItems;                                 //@synthesize customScheduleItems=_customScheduleItems - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)customScheduleItems;
-(STBlueprintScheduleSimpleItem *)simpleSchedule;
-(void)setSimpleSchedule:(STBlueprintScheduleSimpleItem *)arg1 ;
-(void)setCustomScheduleItems:(NSArray *)arg1 ;
@end

