/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNTransitInstruction.h>

@class GEOComposedWalkingRouteLeg;

@interface MNTransitWalkingLegInstruction : MNTransitInstruction {

	GEOComposedWalkingRouteLeg* _walkingLeg;

}

@property (nonatomic,readonly) GEOComposedWalkingRouteLeg * walkingLeg;              //@synthesize walkingLeg=_walkingLeg - In the implementation block
+(id)instructionForWalkingLeg:(id)arg1 context:(long long)arg2 ;
-(id)instructionSet;
-(NSDictionary*)overridenInstructionsMapping;
-(id)initWithWalkingLeg:(id)arg1 context:(long long)arg2 ;
-(GEOComposedWalkingRouteLeg *)walkingLeg;
@end
