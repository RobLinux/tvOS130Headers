/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, STUsage;

@interface STUsageBlock : NSManagedObject

@property (nonatomic,retain) NSDate * lastEventDate; 
@property (nonatomic,retain) NSDate * longestSessionStartDate; 
@property (nonatomic,retain) NSDate * longestSessionEndDate; 
@property (assign,nonatomic) long long screenTimeInSeconds; 
@property (nonatomic,copy) NSDate * startDate; 
@property (assign,nonatomic) long long durationInMinutes; 
@property (nonatomic,retain) NSDate * firstPickupDate; 
@property (assign,nonatomic) long long numberOfPickupsWithoutApplicationUsage; 
@property (nonatomic,retain) NSSet * categories; 
@property (nonatomic,retain) NSSet * countedItems; 
@property (nonatomic,retain) STUsage * usage; 
+(id)usageCountedItemsForUsageBlocks:(id)arg1 ;
+(id)fetchRequestMatchingUsage:(id)arg1 dateInterval:(id)arg2 ;
+(double)totalScreenTimeForUsageBlocks:(id)arg1 ;
+(long long)totalPickupsForUsageBlocks:(id)arg1 ;
+(long long)totalNotificationsForUsageBlocks:(id)arg1 ;
+(id)usageCategoriesForUsageBlocks:(id)arg1 ;
@end

