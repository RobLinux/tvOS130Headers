/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SALocalSearchMapItem, NSString;

@interface SALocalSearchDropAPinCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SALocalSearchMapItem * mapItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)dropAPinCompleted;
+(id)dropAPinCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setMapItem:(SALocalSearchMapItem *)arg1 ;
-(SALocalSearchMapItem *)mapItem;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end
