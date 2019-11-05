/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKSerializableObject.h>

@class NSString, NSURL;

@interface EKSerializableParticipant : EKSerializableObject {

	NSString* _name;
	NSString* _emailAddress;
	NSString* _phoneNumber;
	NSURL* _url;
	long long _participantRole;
	long long _participantStatus;
	long long _participantType;

}

@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                    //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                     //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) long long participantRole;                //@synthesize participantRole=_participantRole - In the implementation block
@property (assign,nonatomic) long long participantStatus;              //@synthesize participantStatus=_participantStatus - In the implementation block
@property (assign,nonatomic) long long participantType;                //@synthesize participantType=_participantType - In the implementation block
+(id)classesForKey;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSURL *)url;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(long long)participantRole;
-(long long)participantStatus;
-(void)setParticipantRole:(long long)arg1 ;
-(void)setParticipantStatus:(long long)arg1 ;
-(long long)participantType;
-(id)initWithParticipant:(id)arg1 ;
-(id)createAttendee:(id*)arg1 ;
-(void)setParticipantType:(long long)arg1 ;
@end

