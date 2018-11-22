//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
// UUID: F97617FE-1C23-3D6B-8637-B71CF93F6894
//
//                           Arch: x86_64
//                Current version: 200.0.1
//          Compatibility version: 1.0.0
//                 Source version: 200.0.1.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol ICSWriting
- (_Bool)shouldObscureValue;
- (NSSet *)parametersToObscure;
- (NSSet *)propertiesToObscure;
- (NSSet *)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (NSSet *)parametersToIncludeForChecksumVersion:(int)arg1;
- (NSSet *)propertiesToIncludeForChecksumVersion:(int)arg1;
- (void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(NSMutableString *)arg2;
- (NSString *)ICSStringWithOptions:(unsigned long long)arg1;
@end

@protocol NSCoding
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
@end

@interface ICSComponent : NSObject <ICSWriting>
{
    NSMutableDictionary *_properties;
    NSMutableArray *_components;
}

+ (id)name;
+ (id)makeUID;
+ (int)statusFromString:(id)arg1;
+ (id)stringFromStatus:(int)arg1;
+ (id)inheritanceKeywords;
@property(retain) NSMutableArray *components; // @synthesize components=_components;
- (_Bool)shouldObscureValue;
- (id)parametersToObscure;
- (id)propertiesToObscure;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (id)ICSStringWithOptions:(unsigned long long)arg1;
- (_Bool)ignorePropertyWithName:(id)arg1;
- (void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)dealloc;
- (void)setProperty:(id)arg1 forName:(id)arg2;
- (void)setProperties:(id)arg1 forName:(id)arg2;
- (id)propertiesForName:(id)arg1;
- (void)removePropertiesForName:(id)arg1;
- (_Bool)validate:(id *)arg1;
- (id)debugDescription;
- (id)init;
- (id)properties;
- (void)addProperty:(id)arg1 withValue:(id)arg2;
- (void)setPropertyValue:(id)arg1 type:(int)arg2 forName:(id)arg3;
- (void)setPropertyValue:(id)arg1 forName:(id)arg2;
- (void)removeComponent:(id)arg1;
- (void)addComponent:(id)arg1;
- (void)setForcedAllDay:(_Bool)arg1;
- (_Bool)forcedAllDay;
- (id)x_apple_travel_start;
- (void)setX_apple_travel_start:(id)arg1;
- (void)setX_apple_travel_advisory_behavior:(id)arg1;
- (id)x_apple_travel_advisory_behavior;
- (void)setX_apple_travel_duration:(id)arg1;
- (id)x_apple_travel_duration;
@property(retain) NSArray *conferences;
@property(retain) NSString *x_apple_serverFilename;
@property(retain) NSString *x_apple_scheduletag;
@property(retain) NSString *x_apple_etag;
@property(retain) ICSStructuredLocation *x_apple_structured_location;
@property _Bool x_apple_ignore_on_restore;
@property _Bool x_apple_ews_needsserverconfirmation;
@property(retain) NSString *x_apple_ews_permission;
@property(retain) NSString *x_apple_ews_itemid;
@property(retain) NSString *x_apple_ews_changekey;
@property(retain) NSString *x_apple_dropbox;
@property int x_calendarserver_access;
@property unsigned long long priority;
@property(retain) NSURL *url;
@property(retain) NSString *uid;
@property(retain) ICSTrigger *trigger;
@property(retain) NSString *summary;
@property(retain) NSString *statusString;
@property int status;
@property unsigned long long sequence;
@property(retain) NSArray *rrule;
@property(retain) ICSDate *recurrence_id;
@property(retain) NSArray *rdate;
@property(retain) ICSUserAddress *organizer;
@property(retain) NSString *location;
@property(retain) ICSDate *last_modified;
@property(retain) NSArray *exrule;
@property(retain) NSArray *exdate;
@property(retain) ICSDuration *duration;
@property(retain) ICSDate *dtend;
@property(readonly) _Bool isAllDay;
@property(retain) ICSDate *dtstart;
@property(retain) ICSDate *dtstamp;
@property(retain) NSString *description;
@property(retain) ICSDate *created;
@property int classification;
@property(retain) NSArray *attendee;
@property(retain) NSArray *attach;
- (id)allProperties;
- (void)fixComponent;
- (void)fixExceptionDates;
- (void)fixExceptionRules;
- (void)fixRecurrenceDates;
- (void)fixRecurrenceRules;
- (void)fixAttachments;
- (void)fixAttendees;
- (void)fixAlarms;
- (void)fixPropertiesInheritance:(id)arg1;

@end

@interface ICSTimeZone : ICSComponent
{
    id _systemTimeZone;
}

+ (id)name;
+ (id)timeZoneWithSystemTimeZoneName:(id)arg1;
+ (id)blocksAfterDate:(id)arg1 untilDate:(id)arg2 forTimeZone:(id)arg3;
- (void)dealloc;
- (id)systemTimeZoneForDate:(id)arg1;
@property(retain, nonatomic) NSString *tzid;
- (id)initWithSystemTimeZone:(id)arg1 fromDate:(id)arg2 options:(int)arg3;
- (id)_previousDSTTransitionForDate:(id)arg1 timezone:(id)arg2;
- (id)initWithTimeZone:(id)arg1 fromDate:(id)arg2 options:(int)arg3;
- (id)initWithSystemTimeZone:(id)arg1;
- (id)getNSTimeZone:(id)arg1;
- (id)getNSTimeZoneFromDate:(id)arg1 toDate:(id)arg2;
- (_Bool)isEqualToNSTimeZone:(id)arg1 forDate:(id)arg2;
- (id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2;

@end

@interface ICSCalendar : ICSComponent
{
    NSMutableSet *_keys;
    NSMutableDictionary *_masters;
    NSMutableDictionary *_occurrences;
    NSMutableDictionary *_timezones;
    NSMutableArray *_parsingErrors;
}

+ (long long)compareCalendarServerAccess:(int)arg1 withAccess:(int)arg2;
+ (id)ICSStringFromCalendarServerAccess:(int)arg1;
+ (int)calendarServerAccessFromICSString:(id)arg1;
+ (id)ICSStringFromMethod:(int)arg1;
+ (int)methodFromICSString:(id)arg1;
+ (id)defaultProdid;
+ (void)setDefaultProdid:(id)arg1;
+ (id)name;
+ (id)calendarWithKnownTimeZones;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (id)parsingErrors;
- (void)addParsingError:(id)arg1;
- (id)timeZoneForKey:(id)arg1;
- (void)addComponent:(id)arg1;
- (void)setComponents:(id)arg1;
- (void)setComponents:(id)arg1 options:(int)arg2;
- (void)setComponents:(id)arg1 timeZones:(_Bool)arg2;
- (id)componentOccurrencesForKey:(id)arg1;
- (id)componentForKey:(id)arg1;
- (id)componentKeys;
- (void)_addComponent:(id)arg1;
- (id)_timeZonesForComponents:(id)arg1 options:(int)arg2;
- (void)_addTimeZonesInComponent:(id)arg1 toDictionary:(id)arg2;
- (void)_addTimeZonesInComponent:(id)arg1 toSet:(id)arg2;
- (id)systemDateForDate:(id)arg1 options:(int)arg2;
- (id)systemCalendarForDate:(id)arg1 options:(int)arg2;
- (id)systemTimeZoneForDate:(id)arg1;
@property(retain, nonatomic) NSString *x_wr_timezone;
@property(retain, nonatomic) NSString *x_wr_relcalid;
@property(retain, nonatomic) NSString *x_wr_calname;
@property(retain, nonatomic) NSString *x_wr_caldesc;
@property(retain, nonatomic) ICSColor *x_apple_calendar_color;
@property(retain, nonatomic) ICSDuration *x_apple_auto_refresh;
@property(retain, nonatomic) NSString *version;
@property(retain, nonatomic) NSString *prodid;
@property(nonatomic) int method;
@property(retain, nonatomic) NSString *calscale;
- (void)dealloc;
- (id)init;
- (id)_init;
- (void)fixEntities;
- (void)fixComponent;
- (void)fixPropertiesInheritance;

// Remaining properties
@property _Bool x_apple_ignore_on_restore; // @dynamic x_apple_ignore_on_restore;
@property int x_calendarserver_access; // @dynamic x_calendarserver_access;

@end

@interface ICSDuration : NSObject <NSCoding>
{
    double _duration;
}

+ (id)generateDurationFromICSString:(id)arg1;
+ (id)durationFromICSString:(id)arg1;
+ (id)durationFromRFC2445UTF8String:(const char *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)ICSStringWithOptions:(unsigned long long)arg1;
- (_Bool)isNegative;
- (long long)seconds;
- (long long)minutes;
- (long long)hours;
- (long long)days;
- (long long)weeks;
- (double)timeInterval;
- (id)initWithWeeks:(long long)arg1 days:(long long)arg2 hours:(long long)arg3 minutes:(long long)arg4 seconds:(long long)arg5;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

@interface ICSPredefinedValue : NSNumber
{
    long long _value;
}

+ (id)numberWithLong:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (long long)longValue;
- (void)getValue:(void *)arg1;
- (const char *)objCType;
- (id)initWithBytes:(const void *)arg1 objCType:(const char *)arg2;
- (id)initWithLong:(long long)arg1;

@end

@interface ICSRoleParameter : ICSPredefinedValue
{
}

+ (id)roleParameterFromCode:(int)arg1;
+ (id)roleParameterFromICSString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

@interface ICSCalendarUserParameter : ICSPredefinedValue
{
}

+ (id)calendarUserTypeParameterFromCode:(int)arg1;
+ (id)calendarUserTypeParameterFromICSString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

@interface ICSParticipationStatusParameter : ICSPredefinedValue
{
}

+ (id)participationStatusParameterFromCode:(int)arg1;
+ (id)participationStatusParameterFromICSString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

@interface ICSScheduleAgentParameter : ICSPredefinedValue
{
}

+ (id)scheduleAgentParameterFromCode:(int)arg1;
+ (id)scheduleAgentParameterFromICSString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

@interface ICSScheduleStatusParameter : ICSPredefinedValue
{
}

+ (id)scheduleStatusParameterFromCode:(int)arg1;
+ (id)scheduleStatusParameterFromICSString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

@interface ICSScheduleForceSendParameter : ICSPredefinedValue
{
}

+ (id)scheduleForceSendParameterFromCode:(int)arg1;
+ (id)scheduleForceSendParameterFromICSString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

@interface ICSFreeBusyTypeParameter : ICSPredefinedValue
{
}

+ (id)freeBusyTypeParameterFromCode:(int)arg1;
+ (id)freeBusyTypeParameterFromICSString:(id)arg1;

@end

@interface ICSStatusValue : ICSPredefinedValue
{
    NSString *_statusString;
}

+ (id)statusTypeFromCode:(int)arg1 statusString:(id)arg2;
+ (id)statusTypeFromCode:(int)arg1;
+ (id)statusValueFromICSString:(id)arg1;
@property(retain) NSString *statusString; // @synthesize statusString=_statusString;
- (void)dealloc;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

@interface ICSTransparencyValue : ICSPredefinedValue
{
}

+ (id)transparencyTypeFromCode:(int)arg1;
+ (id)transparencyValueFromICSString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

@interface ICSBusyStatusValue : ICSPredefinedValue
{
}

+ (id)busyStatusTypeFromCode:(int)arg1;
+ (id)busyStatusValueFromICSString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

@interface ICSMethodValue : ICSPredefinedValue
{
}

+ (id)methodParameterFromCode:(int)arg1;
+ (id)methodValueFromICSString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

@interface ICSActionValue : ICSPredefinedValue
{
}

+ (id)actionParameterFromCode:(int)arg1;
+ (id)actionValueFromICSString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

@interface ICSCalendarServerAccessValue : ICSPredefinedValue
{
}

+ (id)calendarServerAccessFromCode:(int)arg1;
+ (id)calendarServerAccessFromICSString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

@interface ICSClassificationValue : ICSPredefinedValue
{
}

+ (id)classificationFromCode:(int)arg1;
+ (id)classificationValueFromICSString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

@interface ICSTodo : ICSComponent
{
}

+ (id)name;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
@property(retain, nonatomic) NSArray *x_apple_activity;
@property(nonatomic) unsigned long long x_apple_sort_order;
@property(retain, nonatomic) ICSDate *due;
@property(nonatomic) long long percentComplete;
@property(retain, nonatomic) ICSDate *completed;
- (_Bool)validate:(id *)arg1;
- (void)fixComponent;

// Remaining properties
@property(retain) NSArray *attach; // @dynamic attach;
@property(retain) NSArray *attendee; // @dynamic attendee;
@property int classification; // @dynamic classification;
@property(retain) NSArray *conferences; // @dynamic conferences;
@property(retain) ICSDate *created; // @dynamic created;
@property(retain) NSString *description; // @dynamic description;
@property(retain) ICSDate *dtstamp; // @dynamic dtstamp;
@property(retain) ICSDate *dtstart; // @dynamic dtstart;
@property(retain) ICSDuration *duration; // @dynamic duration;
@property(retain) NSArray *exdate; // @dynamic exdate;
@property(retain) NSArray *exrule; // @dynamic exrule;
@property(retain) ICSDate *last_modified; // @dynamic last_modified;
@property(retain) NSString *location; // @dynamic location;
@property(retain) ICSUserAddress *organizer; // @dynamic organizer;
@property unsigned long long priority; // @dynamic priority;
@property(retain) NSArray *rdate; // @dynamic rdate;
@property(retain) ICSDate *recurrence_id; // @dynamic recurrence_id;
@property(retain) NSArray *rrule; // @dynamic rrule;
@property unsigned long long sequence; // @dynamic sequence;
@property int status; // @dynamic status;
@property(retain) NSString *summary; // @dynamic summary;
@property(retain) NSString *uid; // @dynamic uid;
@property(retain) NSURL *url; // @dynamic url;
@property(retain) NSString *x_apple_ews_changekey; // @dynamic x_apple_ews_changekey;
@property(retain) NSString *x_apple_ews_itemid; // @dynamic x_apple_ews_itemid;
@property _Bool x_apple_ews_needsserverconfirmation; // @dynamic x_apple_ews_needsserverconfirmation;
@property(retain) NSString *x_apple_ews_permission; // @dynamic x_apple_ews_permission;
@property(retain) ICSStructuredLocation *x_apple_structured_location; // @dynamic x_apple_structured_location;

@end

@interface ICSAttachment : ICSProperty
{
}

- (_Bool)shouldObscureValue;
@property(retain, nonatomic) NSString *x_apple_ews_attachmentid;
@property(retain, nonatomic) NSString *x_apple_filename;
@property(retain, nonatomic) NSString *managed_filename;
@property(nonatomic) _Bool x_apple_autoarchived;
@property(retain, nonatomic) NSString *fmtype;
@property(retain, nonatomic) NSString *managed_id;
@property(nonatomic) int size;
- (id)filename;
- (_Bool)isBinary;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setData:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

@interface ICSEvent : ICSComponent
{
}

+ (id)name;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (_Bool)isDefaultAlarmDeleted;
@property(nonatomic) int x_apple_ews_busystatus;
@property(nonatomic) _Bool x_wr_rsvpneeded; // @dynamic x_wr_rsvpneeded;
@property(nonatomic) _Bool x_wr_itipstatusml; // @dynamic x_wr_itipstatusml;
@property(nonatomic) _Bool x_wr_itipstatusattendeeml; // @dynamic x_wr_itipstatusattendeeml;
@property(nonatomic) _Bool x_wr_itipalreadysent; // @dynamic x_wr_itipalreadysent;
@property(nonatomic) _Bool x_apple_needs_reply; // @dynamic x_apple_needs_reply;
@property(nonatomic) _Bool x_apple_dontschedule;
@property(retain, nonatomic) NSString *x_calendarserver_private_comment;
@property(retain, nonatomic) NSArray *x_calendarserver_attendee_comment;
@property(nonatomic) int transp;
- (_Bool)validate:(id *)arg1;
- (void)fixComponent;

// Remaining properties
@property(retain) NSArray *attach; // @dynamic attach;
@property(retain) NSArray *attendee; // @dynamic attendee;
@property int classification; // @dynamic classification;
@property(retain) NSArray *conferences; // @dynamic conferences;
@property(retain) ICSDate *created; // @dynamic created;
@property(retain) NSString *description; // @dynamic description;
@property(retain) ICSDate *dtend; // @dynamic dtend;
@property(retain) ICSDate *dtstamp; // @dynamic dtstamp;
@property(retain) ICSDate *dtstart; // @dynamic dtstart;
@property(retain) ICSDuration *duration; // @dynamic duration;
@property(retain) NSArray *exdate; // @dynamic exdate;
@property(retain) NSArray *exrule; // @dynamic exrule;
@property _Bool forcedAllDay; // @dynamic forcedAllDay;
@property(readonly) _Bool isAllDay; // @dynamic isAllDay;
@property(retain) ICSDate *last_modified; // @dynamic last_modified;
@property(retain) NSString *location; // @dynamic location;
@property(retain) ICSUserAddress *organizer; // @dynamic organizer;
@property(retain) NSArray *rdate; // @dynamic rdate;
@property(retain) ICSDate *recurrence_id; // @dynamic recurrence_id;
@property(retain) NSArray *rrule; // @dynamic rrule;
@property unsigned long long sequence; // @dynamic sequence;
@property int status; // @dynamic status;
@property(retain) NSString *summary; // @dynamic summary;
@property(retain) NSString *uid; // @dynamic uid;
@property(retain) NSURL *url; // @dynamic url;
@property(retain) NSString *x_apple_dropbox; // @dynamic x_apple_dropbox;
@property(retain) NSString *x_apple_ews_changekey; // @dynamic x_apple_ews_changekey;
@property(retain) NSString *x_apple_ews_itemid; // @dynamic x_apple_ews_itemid;
@property _Bool x_apple_ews_needsserverconfirmation; // @dynamic x_apple_ews_needsserverconfirmation;
@property(retain) NSString *x_apple_ews_permission; // @dynamic x_apple_ews_permission;
@property _Bool x_apple_ignore_on_restore; // @dynamic x_apple_ignore_on_restore;
@property(retain) ICSStructuredLocation *x_apple_structured_location; // @dynamic x_apple_structured_location;
@property(retain) ICSTravelAdvisoryBehavior *x_apple_travel_advisory_behavior; // @dynamic x_apple_travel_advisory_behavior;
@property(retain) ICSTravelDuration *x_apple_travel_duration; // @dynamic x_apple_travel_duration;
@property(retain) ICSStructuredLocation *x_apple_travel_start; // @dynamic x_apple_travel_start;

@end

@interface ICSUserAddress : ICSProperty
{
}

+ (id)ICSStringFromRole:(int)arg1;
+ (id)ICSStringFromScheduleForceSend:(int)arg1;
+ (id)ICSStringFromScheduleStatus:(int)arg1;
+ (id)ICSStringFromScheduleAgent:(int)arg1;
+ (id)ICSStringFromParticipationStatus:(int)arg1;
+ (id)ICSStringFromCalendarUser:(int)arg1;
+ (int)roleFromICSString:(id)arg1;
+ (int)scheduleForceSendFromICSString:(id)arg1;
+ (int)scheduleAgentFromICSString:(id)arg1;
+ (int)scheduleStatusFromICSString:(id)arg1;
+ (int)participationStatusFromICSString:(id)arg1;
+ (int)calendarUserFromICSString:(id)arg1;
+ (id)URLForNoMail;
- (_Bool)shouldObscureValue;
- (id)parametersToObscure;
- (id)propertiesToObscure;
- (id)x_calendarserver_email;
- (void)setX_calendarserver_email:(id)arg1;
@property(retain, nonatomic) NSString *email;
@property(nonatomic) _Bool x_apple_self_invited;
@property(retain, nonatomic) ICSDateValue *partstatModified;
@property(nonatomic) _Bool rsvp;
@property(nonatomic) int role;
@property(nonatomic) int scheduleforcesend;
@property(nonatomic) int scheduleagent;
@property(nonatomic) int schedulestatus;
@property(nonatomic) int partstat;
@property(retain, nonatomic) NSString *dir;
@property(nonatomic) int cutype;
@property(retain, nonatomic) NSString *cn;
- (id)displayName;
- (id)emailAddress;
- (_Bool)isHTTPSAddress;
- (_Bool)isHTTPAddress;
- (_Bool)isEmailAddress;
- (_Bool)hasEmailAddress;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)fixAddress;
- (void)setURL:(id)arg1;

@end

@interface ICSJournal : ICSComponent
{
}

+ (id)name;
- (_Bool)validate:(id *)arg1;

// Remaining properties
@property(retain) NSArray *attach; // @dynamic attach;
@property(retain) NSArray *attendee; // @dynamic attendee;
@property int classification; // @dynamic classification;
@property(retain) ICSDate *created; // @dynamic created;
@property(retain) NSString *description; // @dynamic description;
@property(retain) ICSDate *dtstamp; // @dynamic dtstamp;
@property(retain) ICSDate *dtstart; // @dynamic dtstart;
@property(retain) NSArray *exdate; // @dynamic exdate;
@property(retain) NSArray *exrule; // @dynamic exrule;
@property(retain) ICSDate *last_modified; // @dynamic last_modified;
@property(retain) ICSUserAddress *organizer; // @dynamic organizer;
@property(retain) NSArray *rdate; // @dynamic rdate;
@property(retain) ICSDate *recurrence_id; // @dynamic recurrence_id;
@property(retain) NSArray *rrule; // @dynamic rrule;
@property unsigned long long sequence; // @dynamic sequence;
@property int status; // @dynamic status;
@property(retain) NSString *summary; // @dynamic summary;
@property(retain) NSString *uid; // @dynamic uid;
@property(retain) NSURL *url; // @dynamic url;

@end

@interface ICSAvailability : ICSComponent
{
}

+ (id)name;

// Remaining properties
@property(retain) ICSDate *created; // @dynamic created;
@property(retain) ICSDate *dtend; // @dynamic dtend;
@property(retain) ICSDate *dtstamp; // @dynamic dtstamp;
@property(retain) ICSDate *dtstart; // @dynamic dtstart;
@property(retain) ICSDuration *duration; // @dynamic duration;
@property(retain) ICSDate *last_modified; // @dynamic last_modified;
@property(retain) ICSUserAddress *organizer; // @dynamic organizer;
@property unsigned long long sequence; // @dynamic sequence;
@property(retain) NSString *summary; // @dynamic summary;
@property(retain) NSString *uid; // @dynamic uid;
@property(retain) NSURL *url; // @dynamic url;

@end

@interface ICSFreeBusy : ICSComponent
{
}

+ (id)name;
@property(retain, nonatomic) NSString *x_calendarserver_extended_freebusy;
@property(retain, nonatomic) NSString *x_calendarserver_mask_uid;
@property(retain, nonatomic) NSArray *freebusy;

// Remaining properties
@property(retain) NSArray *attendee; // @dynamic attendee;
@property(retain) ICSDate *created; // @dynamic created;
@property(retain) ICSDate *dtend; // @dynamic dtend;
@property(retain) ICSDate *dtstamp; // @dynamic dtstamp;
@property(retain) ICSDate *dtstart; // @dynamic dtstart;
@property(retain) ICSDuration *duration; // @dynamic duration;
@property(retain) ICSUserAddress *organizer; // @dynamic organizer;
@property(retain) NSString *summary; // @dynamic summary;
@property(retain) NSString *uid; // @dynamic uid;

@end

@interface ICSColor : NSObject <NSCoding>
{
    unsigned char _red;
    unsigned char _green;
    unsigned char _blue;
}

+ (_Bool)colorDetailsAreEffectivelyDifferentFirstColor:(id)arg1 secondColor:(id)arg2 firstSymbolicName:(id)arg3 secondSymbolicName:(id)arg4;
+ (id)symbolicColorForLegacyRGB:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)blue;
- (unsigned char)green;
- (unsigned char)red;
- (id)initWithRed:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3;

@end

@interface ICSDocument : NSObject
{
    ICSCalendar *_calendar;
}

+ (void)suppressParserSyntaxErrorLogging;
+ (int)ICSChecksumVersionSpecifiedInOptions:(unsigned long long)arg1;
- (_Bool)validate:(id *)arg1;
- (id)ICSChecksumForVersion:(int)arg1;
- (id)ICSChecksumStringForVersion:(int)arg1;
- (id)ICSStringWithOptions:(unsigned long long)arg1;
- (id)ICSDataWithOptions:(unsigned long long)arg1;
- (id)calendar;
- (void)dealloc;
- (id)initWithCalendar:(id)arg1;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithICSString:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

@end

@interface ICSParser : NSObject
{
    long long _options;
    ICSTokenizer *_lexer;
    NSData *_data;
}

+ (id)entitiesFromNSData:(id)arg1 options:(long long)arg2;
@property(readonly) ICSTokenizer *lexer; // @synthesize lexer=_lexer;
- (id)parseData;
- (void)parseComponent:(id)arg1;
- (_Bool)parseProperty:(id)arg1;
- (_Bool)createPropertyType:(int)arg1 component:(id)arg2 withName:(id)arg3;
- (void)parseParameter:(id)arg1;
- (id)makeComponent:(char *)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2;

@end

@interface ICSAvailable : ICSComponent
{
}

+ (id)name;

// Remaining properties
@property(retain) NSArray *attach; // @dynamic attach;
@property(retain) NSArray *attendee; // @dynamic attendee;
@property(retain) ICSDate *created; // @dynamic created;
@property(retain) ICSDate *dtend; // @dynamic dtend;
@property(retain) ICSDate *dtstamp; // @dynamic dtstamp;
@property(retain) ICSDate *dtstart; // @dynamic dtstart;
@property(retain) ICSDuration *duration; // @dynamic duration;
@property(retain) NSArray *rrule; // @dynamic rrule;
@property(retain) NSString *uid; // @dynamic uid;

@end

@interface ICSAttendeeComment : ICSProperty
{
}

- (_Bool)shouldObscureValue;
- (id)parametersToObscure;
@property(retain, nonatomic) ICSDateValue *x_calendarserver_dtstamp;
@property(retain, nonatomic) NSString *x_calendarserver_attendee_ref;
- (void)setComment:(id)arg1;
- (id)initWithComment:(id)arg1;

@end

@interface ICSTrigger : ICSProperty
{
}

- (id)travelRelativeDuration;
- (id)initWithDuration:(id)arg1 travelRelativeDuration:(id)arg2;
- (_Bool)isDurationBased;
- (id)initWithDuration:(id)arg1;
- (id)initWithDate:(id)arg1;
- (void)fixAlarmTrigger;
- (void)setDuration:(id)arg1;
- (void)setDate:(id)arg1;

@end

@interface ICSAlarm : ICSComponent
{
}

+ (id)createNoneAlarm;
+ (id)parseableDocumentFromICS:(id)arg1;
+ (id)ICSStringFromAction:(int)arg1;
+ (int)actionFromICSString:(id)arg1;
+ (id)name;
@property(retain, nonatomic) NSData *bookmark; // @dynamic bookmark;
@property(nonatomic) _Bool x_apple_local_default_alarm;
@property(nonatomic) _Bool x_apple_travel_default_alarm;
@property(nonatomic) _Bool x_apple_default_alarm;
@property(retain, nonatomic) NSString *x_apple_proximity;
@property(retain, nonatomic) NSString *relatedTo;
@property(retain, nonatomic) ICSDateTimeUTCValue *acknowledged;
@property(retain, nonatomic) NSString *x_wr_alarmuid;
@property(nonatomic) int action;
- (_Bool)isNoneAlarm;
- (void)fixAlarm;

// Remaining properties
@property(retain) NSArray *attach; // @dynamic attach;
@property(retain) NSArray *attendee; // @dynamic attendee;
@property(retain) NSString *description; // @dynamic description;
@property(retain) NSString *summary; // @dynamic summary;
@property(retain) ICSTrigger *trigger; // @dynamic trigger;
@property(retain) NSString *uid; // @dynamic uid;
@property(retain) ICSStructuredLocation *x_apple_structured_location; // @dynamic x_apple_structured_location;

@end

@interface ICSFreeBusyTime : ICSProperty
{
}

@property(nonatomic) int fbtype;
- (id)initWithPeriod:(id)arg1;

@end

@interface ICSLogger : NSObject
{
    int _logCount;
    id <ICSLoggingDelegate> _loggingDelegate;
}

+ (void)setDelegate:(id)arg1;
+ (void)logAtLevel:(long long)arg1 forTokenizer:(id)arg2 message:(id)arg3;
+ (id)sharedInstance;
- (void)setDelegate:(id)arg1;
- (void)logAtLevel:(long long)arg1 forTokenizer:(id)arg2 format:(id)arg3 args:(struct __va_list_tag [1])arg4;

@end

@interface ICSTimeZoneBlock : ICSComponent
{
}

@property(nonatomic) long long tzoffsetto;
@property(nonatomic) long long tzoffsetfrom;
@property(nonatomic) NSArray *tzname;
@property(retain, nonatomic) NSArray *rrule;
@property(retain, nonatomic) NSArray *rdate;
@property(retain, nonatomic) ICSDate *dtstart;
- (_Bool)validate:(id *)arg1;
- (long long)compare:(id)arg1;
- (void)addRecurrenceDate:(id)arg1;
- (id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2;

@end

@interface ICSTimeZoneDaylightBlock : ICSTimeZoneBlock
{
}

+ (id)name;

@end

@interface ICSTimeZoneStandardBlock : ICSTimeZoneBlock
{
}

+ (id)name;

@end

@interface ICSTimeZoneTranslator : NSObject
{
}

+ (id)timeZoneNameForTimeZoneID:(id)arg1;
+ (void)initializeTimeZoneIDTranslation;

@end

@interface ICSTimeZoneChange : NSObject
{
    double _interval;
    long long _tzOffsetTo;
}

- (long long)compare:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (long long)tzOffsetTo;
- (double)interval;
- (id)initWithTimeInterval:(double)arg1 tzOffsetTo:(long long)arg2;

@end

@interface ICSProperty : NSObject <NSCoding, ICSWriting>
{
    NSMutableDictionary *_parameters;
    unsigned long long _type;
    id _value;
}

- (id)description;
- (id)stringValue;
- (id)parameters;
- (_Bool)alwaysHasParametersToSerialize;
- (void)setValue:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithValue:(id)arg1 type:(unsigned long long)arg2;
- (id)allParameters;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)shouldObscureValue;
- (id)parametersToObscure;
- (id)propertiesToObscure;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)ICSStringWithOptions:(unsigned long long)arg1;
- (void)removeParameterValueForName:(id)arg1;
- (void)setParameterValue:(id)arg1 forName:(id)arg2;
- (void)setParameters:(id)arg1;
- (void)addParametersFromDictionary:(id)arg1;
- (id)parameterValueForName:(id)arg1;
- (id)value;
- (unsigned long long)type;
- (_Bool)isMultiValued;
- (void)dealloc;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)_appendDateTimeInDate:(id)arg1 asUTCToResult:(id)arg2;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 additionalParameters:(id)arg3;
- (void)setValueAsProperty:(id)arg1 withRawValue:(const char *)arg2 options:(unsigned long long)arg3;
- (void)_setParsedValues:(id)arg1 type:(unsigned long long)arg2;
- (void)addParameter:(id)arg1 withRawValue:(id)arg2 options:(unsigned long long)arg3;

@end

@interface ICSDateValue : NSObject <NSCoding>
{
    long long _year;
    long long _month;
    long long _day;
}

+ (id)dateFromICSString:(id)arg1;
+ (id)dateFromICSUTF8String:(const char *)arg1;
@property(readonly) long long day; // @synthesize day=_day;
@property(readonly) long long month; // @synthesize month=_month;
@property(readonly) long long year; // @synthesize year=_year;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)icsString;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)components;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (int)dateType;

@end

@interface ICSDateTimeValue : ICSDateValue <NSCoding>
{
    long long _hour;
    long long _minute;
    long long _second;
}

@property(readonly) long long second; // @synthesize second=_second;
@property(readonly) long long minute; // @synthesize minute=_minute;
@property(readonly) long long hour; // @synthesize hour=_hour;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)components;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (int)dateType;

@end

@interface ICSDateTimeUTCValue : ICSDateTimeValue
{
}

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

@interface ICSDate : ICSProperty
{
}

- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (id)description;
- (_Bool)hasFloatingTimeZone;
- (_Bool)hasTimeComponent;
- (id)components;
@property(retain, nonatomic) NSString *tzid;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 timeZone:(id)arg7;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (id)initWithValue:(id)arg1;

@end

@interface ICSTravelAdvisoryBehavior : ICSProperty
{
}

- (id)initWithString:(id)arg1;

@end

@interface ICSPeriod : NSObject <NSCoding>
{
    ICSDateValue *_start;
    ICSDateValue *_end;
    ICSDuration *_duration;
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isDurationBased;
- (id)duration;
- (id)end;
- (id)start;
- (void)dealloc;
- (id)initWithStart:(id)arg1 duration:(id)arg2;
- (id)initWithStart:(id)arg1 end:(id)arg2;
- (id)initWithStart:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

@interface ICSByDayValue : NSObject <NSCoding>
{
    NSNumber *_number;
    int _weekday;
}

+ (id)byDayValueFromICSString:(id)arg1;
+ (int)weekdayFromICSString:(id)arg1;
@property int weekday; // @synthesize weekday=_weekday;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSNumber *number;
- (id)initWithWeekday:(int)arg1 number:(id)arg2;
- (id)initWithWeekday:(int)arg1;
- (long long)compare:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

@interface ICSRecurrenceRule : NSObject <NSCoding, ICSWriting>
{
    int _freq;
    NSMutableDictionary *_parameters;
}

+ (id)recurrenceRuleFromICSString:(id)arg1;
+ (id)recurrenceRuleFromICSCString:(const char *)arg1 withTokenizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)shouldObscureValue;
- (id)parametersToObscure;
- (id)propertiesToObscure;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)ICSStringWithOptions:(unsigned long long)arg1;
@property(nonatomic) NSNumber *wkst;
@property(retain, nonatomic) NSArray *bysetpos;
@property(retain, nonatomic) NSArray *bymonth;
@property(retain, nonatomic) NSArray *byweekno;
@property(retain, nonatomic) NSArray *byyearday;
@property(retain, nonatomic) NSArray *bymonthday;
@property(retain, nonatomic) NSArray *byday;
@property(retain, nonatomic) NSArray *byhour;
@property(retain, nonatomic) NSArray *byminute;
@property(retain, nonatomic) NSArray *bysecond;
@property(nonatomic) NSNumber *interval;
@property(nonatomic) NSNumber *count;
@property(retain, nonatomic) ICSDateValue *until;
@property(nonatomic) int freq;
- (void)removeParameterValueForName:(id)arg1;
- (void)setParameterValue:(id)arg1 forName:(id)arg2;
- (id)parameterValueForName:(id)arg1;
- (void)dealloc;
- (id)initWithFrequency:(int)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)cleanUpForStartDate:(id)arg1;
- (id)occurrencesForStartDate:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 inTimeZone:(id)arg4;

@end

@interface ICSStructuredLocation : ICSProperty
{
}

- (_Bool)shouldObscureValue;
- (id)parametersToObscure;
- (id)propertiesToObscure;
@property(retain, nonatomic) NSString *routing;
@property(retain, nonatomic) NSString *address;
@property(retain, nonatomic) NSString *displayName;
@property(retain, nonatomic) NSString *abURLString;
@property(nonatomic) double radius;
@property(retain, nonatomic) NSString *loctype;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *fmtype;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

@interface ICSTokenizer : NSObject
{
    NSData *_data;
    const char *_datastring;
    int _length;
    int _cursor;
    char *_token;
    int _tokenType;
    int _expectedNextTokenType;
    _Bool _printedICS;
    int _logCount;
}

@property int logCount; // @synthesize logCount=_logCount;
@property _Bool printedICS; // @synthesize printedICS=_printedICS;
- (int)tokenType;
- (char *)currentToken;
- (char *)nextToken;
- (void)consumePropValue;
- (void)consumeParamValue;
- (_Bool)consumeEscaped:(const char *)arg1;
- (void)consumeParamName;
- (void)consumePropName;
- (void)consumeWhiteSpace;
- (_Bool)consumeEOL;
- (_Bool)consumeFolding;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

@interface ICSMultiValueProperty : ICSProperty
{
}

- (void)setValues:(id)arg1 valueType:(unsigned long long)arg2;
- (id)values;
- (void)setValue:(id)arg1 type:(unsigned long long)arg2;
- (id)value;
- (_Bool)isMultiValued;
- (id)initWithValue:(id)arg1 type:(unsigned long long)arg2;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)_setParsedValues:(id)arg1 type:(unsigned long long)arg2;

@end

@interface ICSConference : ICSProperty
{
}

@property(retain, nonatomic) NSString *region;
@property(retain, nonatomic) NSString *language;
@property(retain, nonatomic) NSString *info;
@property(retain, nonatomic) NSString *feature;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

@interface ICSTravelDuration : ICSProperty
{
}

- (_Bool)alwaysHasParametersToSerialize;
@property(retain, nonatomic) ICSDuration *duration;
@property(retain, nonatomic) NSString *transparency;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 additionalParameters:(id)arg3;

@end

@interface NSString (ICSWriter)
- (id)_ICSStringForParameterQuotedValue;
- (id)_ICSStringForParameterValue;
- (id)_ICSStringForProperyValue;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
@end

@interface NSMutableString (ICSWriter)
- (void)_ICSStringParameterName:(id)arg1 value:(id)arg2;
- (void)_ICSStringAppendingParameterName:(id)arg1;
- (void)_ICSEscapeParameterQuotedValue;
- (void)_ICSEscapeParameterValue;
- (void)_ICSEscapePropertyValue;
- (void)_ICSStripControlChracters;
- (void)_ICSRemoveCharactersFromSet:(id)arg1;
@end

@interface NSNumber (ICSWriter)
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)_ICSFBTypeAppendingToString:(id)arg1;
- (void)_ICSUTCOffsetAppendingToString:(id)arg1;
- (void)_ICSBoolAppendingToString:(id)arg1;
@end

@interface NSURL (ICSWriter)
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
@end

@interface NSData (ICSWriter)
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
@end

@interface NSArray (ICSWriter)
- (void)_ICSStringsForPropertyValuesWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)_ICSParametersAppendingToString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
@end

@interface NSObject (ICSWriter)
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)_ICSStringWithOptions:(unsigned long long)arg1;
@end

@interface NSNumber (iCalendarImport)
+ (id)boolFromICSString:(id)arg1;
@end

@interface NSTimeZone (ICSTranslation)
+ (id)ICSQuickTimeZoneNames;
- (id)ICSComputeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2;
@end

@interface NSArray (ICSTranslation)
- (_Bool)ICSContainsArray:(id)arg1;
@end
