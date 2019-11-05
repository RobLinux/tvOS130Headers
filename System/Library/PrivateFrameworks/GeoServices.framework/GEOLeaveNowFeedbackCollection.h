/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOLeaveNowFeedbackCollection : PBCodable <NSCopying> {

	GEOSessionID _sessionID;
	double _currentTimestamp;
	double _eventTimestamp;
	double _travelDuration;
	int _actionType;
	int _alertType;
	int _travelState;
	struct {
		unsigned has_sessionID : 1;
		unsigned has_currentTimestamp : 1;
		unsigned has_eventTimestamp : 1;
		unsigned has_travelDuration : 1;
		unsigned has_actionType : 1;
		unsigned has_alertType : 1;
		unsigned has_travelState : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (assign,nonatomic) BOOL hasActionType; 
@property (assign,nonatomic) int actionType; 
@property (assign,nonatomic) BOOL hasAlertType; 
@property (assign,nonatomic) int alertType; 
@property (assign,nonatomic) BOOL hasTravelState; 
@property (assign,nonatomic) int travelState; 
@property (assign,nonatomic) BOOL hasEventTimestamp; 
@property (assign,nonatomic) double eventTimestamp; 
@property (assign,nonatomic) BOOL hasCurrentTimestamp; 
@property (assign,nonatomic) double currentTimestamp; 
@property (assign,nonatomic) BOOL hasTravelDuration; 
@property (assign,nonatomic) double travelDuration; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(GEOSessionID)sessionID;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setActionType:(int)arg1 ;
-(void)setHasActionType:(BOOL)arg1 ;
-(BOOL)hasActionType;
-(int)actionType;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(int)travelState;
-(id)actionTypeAsString:(int)arg1 ;
-(int)StringAsActionType:(id)arg1 ;
-(int)alertType;
-(void)setAlertType:(int)arg1 ;
-(void)setHasAlertType:(BOOL)arg1 ;
-(BOOL)hasAlertType;
-(id)alertTypeAsString:(int)arg1 ;
-(int)StringAsAlertType:(id)arg1 ;
-(void)setTravelState:(int)arg1 ;
-(void)setHasTravelState:(BOOL)arg1 ;
-(BOOL)hasTravelState;
-(id)travelStateAsString:(int)arg1 ;
-(int)StringAsTravelState:(id)arg1 ;
-(double)eventTimestamp;
-(void)setEventTimestamp:(double)arg1 ;
-(void)setHasEventTimestamp:(BOOL)arg1 ;
-(BOOL)hasEventTimestamp;
-(double)currentTimestamp;
-(void)setCurrentTimestamp:(double)arg1 ;
-(void)setHasCurrentTimestamp:(BOOL)arg1 ;
-(BOOL)hasCurrentTimestamp;
-(double)travelDuration;
-(void)setTravelDuration:(double)arg1 ;
-(void)setHasTravelDuration:(BOOL)arg1 ;
-(BOOL)hasTravelDuration;
@end

