/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFCloudKitItem.h>
#import <WorkflowKit/WFLoggableObject.h>

@class CKRecordID, NSString, WFWorkflowRecord, NSDate, NSNumber, WFFileRepresentation, WFWorkflowIcon, NSDictionary;

@interface WFSharedShortcut : NSObject <WFCloudKitItem, WFLoggableObject> {

	CKRecordID* _identifier;
	NSString* _name;
	WFWorkflowRecord* _workflowRecord;
	NSDate* _createdAt;
	NSString* _createdBy;
	NSNumber* _iconColor;
	NSNumber* _iconGlyph;
	WFFileRepresentation* _shortcutFile;
	WFFileRepresentation* _iconFile;

}

@property (nonatomic,retain) NSNumber * iconColor;                                    //@synthesize iconColor=_iconColor - In the implementation block
@property (nonatomic,retain) NSNumber * iconGlyph;                                    //@synthesize iconGlyph=_iconGlyph - In the implementation block
@property (nonatomic,retain) WFFileRepresentation * shortcutFile;                     //@synthesize shortcutFile=_shortcutFile - In the implementation block
@property (nonatomic,retain) WFFileRepresentation * iconFile;                         //@synthesize iconFile=_iconFile - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) WFWorkflowIcon * icon; 
@property (nonatomic,retain) WFWorkflowRecord * workflowRecord;                       //@synthesize workflowRecord=_workflowRecord - In the implementation block
@property (nonatomic,readonly) NSDate * createdAt;                                    //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) NSString * createdBy;                                  //@synthesize createdBy=_createdBy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CKRecordID * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * propertiesForEventLogging; 
+(id)properties;
+(id)recordType;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(CKRecordID *)identifier;
-(WFWorkflowIcon *)icon;
-(void)setIcon:(WFWorkflowIcon *)arg1 ;
-(NSDate *)createdAt;
-(id)sharingURL;
-(NSString *)createdBy;
-(NSDictionary *)propertiesForEventLogging;
-(WFFileRepresentation *)iconFile;
-(void)setIconFile:(WFFileRepresentation *)arg1 ;
-(NSNumber *)iconColor;
-(void)setIconColor:(NSNumber *)arg1 ;
-(void)setIconGlyph:(NSNumber *)arg1 ;
-(NSNumber *)iconGlyph;
-(void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3 ;
-(void)ensureFileAssets;
-(WFWorkflowRecord *)workflowRecord;
-(WFFileRepresentation *)shortcutFile;
-(void)setShortcutFile:(WFFileRepresentation *)arg1 ;
-(void)setWorkflowRecord:(WFWorkflowRecord *)arg1 ;
@end

