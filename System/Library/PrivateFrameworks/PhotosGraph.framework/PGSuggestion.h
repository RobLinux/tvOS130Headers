/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSSet, NSDate, NSString;


@protocol PGSuggestion <NSObject>
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) unsigned short subtype; 
@property (nonatomic,readonly) unsigned short state; 
@property (nonatomic,readonly) unsigned short notificationState; 
@property (nonatomic,readonly) long long version; 
@property (nonatomic,readonly) NSArray * keyAssets; 
@property (nonatomic,readonly) NSArray * representativeAssets; 
@property (nonatomic,readonly) NSSet * features; 
@property (nonatomic,readonly) id recipe; 
@property (nonatomic,copy,readonly) NSArray * suggestedPersonLocalIdentifiers; 
@property (nonatomic,readonly) BOOL containsUnverifiedPersons; 
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) unsigned long long relevanceDurationInDays; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) unsigned char notificationQuality; 
@property (nonatomic,readonly) BOOL isInvalid; 
@property (nonatomic,copy,readonly) NSArray * reasons; 
@optional
-(NSArray *)reasons;
-(BOOL)isInvalid;

@required
-(unsigned short)type;
-(unsigned short)state;
-(long long)version;
-(NSString *)title;
-(NSDate *)creationDate;
-(unsigned short)subtype;
-(NSString *)subtitle;
-(NSSet *)features;
-(unsigned short)notificationState;
-(NSArray *)representativeAssets;
-(NSArray *)keyAssets;
-(BOOL)containsUnverifiedPersons;
-(id)recipe;
-(NSArray *)suggestedPersonLocalIdentifiers;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(unsigned long long)relevanceDurationInDays;
-(unsigned char)notificationQuality;

@end

