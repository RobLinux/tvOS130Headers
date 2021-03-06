/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@interface EKPersistentAttachment : EKPersistentObject
+(id)relations;
+(Class)meltedClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)URL;
-(id)fileSize;
-(id)UUID;
-(void)setURL:(id)arg1 ;
-(void)setFileName:(id)arg1 ;
-(id)fileName;
-(id)fileFormat;
-(void)setFileSize:(id)arg1 ;
-(void)setFileFormat:(id)arg1 ;
-(int)entityType;
-(id)externalId;
-(void)setExternalId:(id)arg1 ;
-(BOOL)isBinary;
-(id)localRelativePath;
-(id)semanticIdentifier;
-(void)setIsBinary:(BOOL)arg1 ;
-(void)setLocalRelativePath:(id)arg1 ;
-(id)XPropertiesData;
-(void)setXPropertiesData:(id)arg1 ;
-(id)URLForPendingFileCopy;
-(void)setURLForPendingFileCopy:(id)arg1 ;
@end

