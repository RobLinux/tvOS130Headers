/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface OTBottleIDs : NSObject {

	NSArray* _preferredBottleIDs;
	NSArray* _partialRecoveryBottleIDs;

}

@property (retain) NSArray * preferredBottleIDs;                    //@synthesize preferredBottleIDs=_preferredBottleIDs - In the implementation block
@property (retain) NSArray * partialRecoveryBottleIDs;              //@synthesize partialRecoveryBottleIDs=_partialRecoveryBottleIDs - In the implementation block
-(NSArray *)preferredBottleIDs;
-(void)setPreferredBottleIDs:(NSArray *)arg1 ;
-(NSArray *)partialRecoveryBottleIDs;
-(void)setPartialRecoveryBottleIDs:(NSArray *)arg1 ;
@end

