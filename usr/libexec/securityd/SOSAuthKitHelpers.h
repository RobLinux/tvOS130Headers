/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:53 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface SOSAuthKitHelpers : NSObject {

	NSSet* _midList;
	NSSet* _machineIDs;
	NSSet* _serialNumbers;

}

@property (nonatomic,retain) NSSet * midList;                    //@synthesize midList=_midList - In the implementation block
@property (nonatomic,retain) NSSet * machineIDs;                 //@synthesize machineIDs=_machineIDs - In the implementation block
@property (nonatomic,retain) NSSet * serialNumbers;              //@synthesize serialNumbers=_serialNumbers - In the implementation block
+(void)activeMIDs:(/*^block*/id)arg1 ;
+(BOOL)peerinfoHasMID:(id)arg1 ;
+(BOOL)updateMIDInPeerInfo:(id)arg1 ;
+(BOOL)accountIsHSA2;
+(id)machineID;
-(BOOL)isUseful;
-(BOOL)midIsValidInList:(id)arg1 ;
-(BOOL)serialIsValidInList:(id)arg1 ;
-(id)initWithActiveMIDS:(id)arg1 ;
-(NSSet *)midList;
-(void)setMidList:(NSSet *)arg1 ;
-(void)setMachineIDs:(NSSet *)arg1 ;
-(NSSet *)machineIDs;
-(NSSet *)serialNumbers;
-(void)setSerialNumbers:(NSSet *)arg1 ;
@end

