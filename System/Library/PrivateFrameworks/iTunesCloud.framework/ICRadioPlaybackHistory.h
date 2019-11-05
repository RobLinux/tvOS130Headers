/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/NSCopying.h>
#import <iTunesCloud/NSMutableCopying.h>
#import <iTunesCloud/NSSecureCoding.h>

@class ICRadioPlaybackHistoryItem, NSString, NSArray, NSDictionary;

@interface ICRadioPlaybackHistory : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	ICRadioPlaybackHistoryItem* _currentTrack;
	long long _numberOfSkips;
	NSString* _stationIdentifier;
	NSArray* _tracks;

}

@property (nonatomic,copy,readonly) NSString * stationIdentifier;                           //@synthesize stationIdentifier=_stationIdentifier - In the implementation block
@property (nonatomic,readonly) long long numberOfSkips;                                     //@synthesize numberOfSkips=_numberOfSkips - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tracks; 
@property (nonatomic,copy,readonly) ICRadioPlaybackHistoryItem * currentTrack;              //@synthesize currentTrack=_currentTrack - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * propertyListRepresentation; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)tracks;
-(NSString *)stationIdentifier;
-(NSDictionary *)propertyListRepresentation;
-(id)initWithStationIdentifier:(id)arg1 ;
-(long long)numberOfSkips;
-(ICRadioPlaybackHistoryItem *)currentTrack;
@end
