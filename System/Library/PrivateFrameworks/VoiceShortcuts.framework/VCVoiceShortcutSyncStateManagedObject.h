/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, VCVoiceShortcutManagedObject;

@interface VCVoiceShortcutSyncStateManagedObject : NSManagedObject

@property (assign,nonatomic) BOOL hasSynced; 
@property (nonatomic,retain) NSData * metadata; 
@property (nonatomic,copy) NSString * syncServiceIdentifier; 
@property (nonatomic,retain) VCVoiceShortcutManagedObject * voiceShortcut; 
+(id)fetchRequest;
@end

