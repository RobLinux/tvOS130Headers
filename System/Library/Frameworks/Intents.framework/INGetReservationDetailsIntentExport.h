/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INSpeakableString, NSArray;


@protocol INGetReservationDetailsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * reservationContainerReference; 
@property (nonatomic,copy) NSArray * reservationItemReferences; 
@required
-(id)init;
-(INSpeakableString *)reservationContainerReference;
-(void)setReservationContainerReference:(id)arg1;
-(NSArray *)reservationItemReferences;
-(void)setReservationItemReferences:(id)arg1;

@end

